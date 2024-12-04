#include<iostream>
using namespace std;
  int fact(int x)
  {  
    int a=1;
    for(int i=2;i<=x;i++){
        a *= i;
    }
    return a;
  }
  int combination(int n,int r)
  {
    int ncr = fact(n)/(fact(r)*fact(n-r));
  }
  int permutation(int n,int r)
  {
    int npr = fact(n)/(fact(n-r));
  }
  int main(){
   int n,r;
   cout<<"Enter n :";
   cin>>n;
   cout<<"Enter r :";
   cin>>r;
   //int nfact = fact(n);
   //int rfact = fact(r);
   //int nrfact = fact(n-r);
   
   int ncr = combination(n,r);
   int npr = permutation(n,r);
   cout<<ncr<<endl;
   cout<<npr;
  
  }
