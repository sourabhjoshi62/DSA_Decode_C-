#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool flag = true; // Assume the number is prime

    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            flag = false; // Number is not prime
            break; // No need to check further, exit the loop
        }
    }

    if (n == 1)
        cout << n << " is neither prime nor composite" << endl;
    else if (flag == true)
        cout << n << " is a prime number" << endl;
    else
        cout << n << " is a composite number" << endl;

    return 0;
}
