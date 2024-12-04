#include<iostream>
using namespace std;

int main() {
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if (x % 3 == 0 || x % 5 == 0) {
        if (x % 15 == 0) {
            cout << "Condition not valid (Divisible by 15)";
        } else {
            cout << "Given number is divisible by 3 or 5";
        }
    } else {
        cout << "Given number is not divisible by 3 or 5";
    }

    return 0;
}
