#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        char ch = 'A';  // Initialize the character to 'A'

        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;  // Increment the character for the next iteration
        }

        cout << endl;
    }

    return 0;
}
