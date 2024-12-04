#include<iostream>
using namespace std;
void swap(int* x,int* y){
  int temp=*x;
  *x=*y;
  *y=temp;
  
return;
//cout<<x<<" "<<y<<endl;

}
int main(){
    int a = 5,b=8;
    swap(&a,&b);
    cout<<a<<" "<<b;
    

}