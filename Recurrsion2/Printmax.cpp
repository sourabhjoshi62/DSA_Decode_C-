#include<iostream>
#include<algorithm>
#include<climits> 
using namespace std;
void Printmax(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(max<arr[idx])max=arr[idx];
    Printmax(arr,n,idx+1,max);
}
int main(){
    int arr[]={2,1,6,3,9,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    Printmax(arr,n,0,INT_MIN);
}

// #include<iostream>
// #include<algorithm>
// #include<climits> // for INT_MAX
// using namespace std;

// void Printmax(int arr[], int n, int idx, int max){
//     if(idx == n){
//         cout << max;
//         return;
//     }
//     if(max < arr[idx])
//         max = arr[idx];
//     Printmax(arr, n, idx + 1, max);
// }

// int main(){
//     int arr[] = {2, 1, 6, 3, 9, 0, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     Printmax(arr, n, 0, INT_MIN); // Initialize max with INT_MIN for correct comparison
//     return 0;
// }
