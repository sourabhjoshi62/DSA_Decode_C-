#include<iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Enter no of rows: ";
    cin >> m;
    cout << "Enter no of columns: ";
    cin >> n;

    int arr[m][n];

    cout << "Enter elements:" << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];
    int max2 = arr[0][1];

    // Ensure max and max2 are properly initialized
    if (max2 > max) {
        swap(max2, max);
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > max){
                max2 = max;      // Update second max
                max = arr[i][j]; // Update max
            } else if(arr[i][j] > max2 && arr[i][j] != max) {
                max2 = arr[i][j]; // Update second max
            }
        }
    }

    cout << "The maximum element is: " << max << endl;
    cout << "The second maximum element is: " << max2 << endl;

    return 0;
}
