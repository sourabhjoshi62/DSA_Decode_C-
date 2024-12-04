#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int a=1;
        for (int j = 1; j <= n+1-i; j++) {
         
         cout<<a;
         a++;

        }

        cout << endl;
    }

    return 0;
}
