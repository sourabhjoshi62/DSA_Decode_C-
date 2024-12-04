#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
   int n;
   cin>>n;
   if(n%2 != 0 && n>50){
    cout<<-3;
   }
   else if(n>50){
    cout<<-2;
   }
   else if(n%2 !=0){
    cout<<-1;
   }
   else{
    cout<<n;
   }
}