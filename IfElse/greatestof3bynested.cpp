#include<iostream>
using namespace std;

int main() {
    int x, y, z;

    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter a number: ";
    cin >> y;
    cout << "Enter a number: ";
    cin >> z;

    if (x > y) {
        if (x > z) {
            cout << "Greatest of them is " << x;
        }
    } else if (y > z) {
        cout << "Greatest of them is " << y;
    } else {
        cout << "Greatest of them is " << z;
    }

    return 0;
}
