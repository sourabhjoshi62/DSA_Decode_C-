#include<iostream>
using namespace std;

int main()
{   
    char y;
    int x = 2;
    
    // Ternary operator
    // condition ? true : false;
    y = (x > 0) ? 'S' : 'X' ;
    
    cout << "value of x is " << x << endl;
    cout << "value of y is " << y << endl;

    return 0;
}
