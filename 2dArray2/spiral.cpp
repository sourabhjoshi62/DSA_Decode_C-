#include<iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter no of rows in matrix 1: ";
    cin >> n;
    cout << "Enter no of columns in matrix 1: ";
    cin >> m;

    cout << "Enter elements of the first matrix:" << endl;
    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int minr = 0, minc = 0, maxr = n - 1, maxc = m - 1;
    int len=n*m;
    int count=0;

    while(minr <= maxr && minc <= maxc) {

        // Right
        for(int j = minc; j <= maxc && count<len; j++) {
            cout << arr[minr][j] << " ";
            count++;
        }
        minr++;

        // Down
        for(int i = minr; i <= maxr && count<len; i++) {
            cout << arr[i][maxc] << " ";
             count++;
        }
        maxc--;

        // Left
        for(int j = maxc; j >= minc && count<len; j--) {
            cout << arr[maxr][j] << " ";
             count++;
        }
        maxr--;

        // Up
        for(int i = maxr; i >= minr && count<len; i--) {
            cout << arr[i][minc] << " ";
             count++;
        }
        minc++;
    }

    return 0;
}
