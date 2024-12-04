#include<iostream>
using namespace std;
int cas(int n){
    if(n==1) return 1;
    if(n==2) return 2;

    return cas(n-1) + cas(n-2);

}
int main(){
    cout<<cas(3);
}