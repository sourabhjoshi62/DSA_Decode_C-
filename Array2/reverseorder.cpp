#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> v;
    int size;
    cout << "Enter size: ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "Entered elements: ";
    for (int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }

    cout << "\nElements in reverse order: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }

    return 0;
}
