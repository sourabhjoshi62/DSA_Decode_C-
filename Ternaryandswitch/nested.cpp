#include<iostream>
using namespace std;

int main()
{   
   
    int x ;
    
    // Ternary operator
    // condition ? true : false;
    //solved from right to left for nested ternary operation
    x=5>8 ? 10 : 1!=2<5 ? 20:30;
    
    cout << "value of x is " << x << endl;
    
    return 0;
}
