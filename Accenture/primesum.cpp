#include<iostream>
#include<string>
#include<cmath>
using namespace std;
// bool isprime(int n){
//   if(n<=1){
//     return false;
//   }
//   for(int i=2;i<=sqrt(n);i++){
//     if(n%i==0) return false;
//   }
//   return true;
// }
bool isprime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true; // 2 is the only even prime number
    if (n % 2 == 0) return false; // Other even numbers are not primes
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
int main(){
    int arr[10];
    for(int i=0;i<=10;i++){
        cin >>arr[i];
    }
    int sum=0;
    for(int i=0;i<=10;i++){
        if(isprime(i)){
            sum += arr[i];
        }
    }
    cout<<sum;



}