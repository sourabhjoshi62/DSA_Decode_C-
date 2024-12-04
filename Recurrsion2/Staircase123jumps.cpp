#include<iostream>
using namespace std;
int cas(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 3;

    return cas(n-1) + cas(n-2) + cas(n-3);

}
int main(){
    cout<<cas(3);
}