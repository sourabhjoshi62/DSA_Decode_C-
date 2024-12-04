#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    int a, x;

    cout << "Enter target: ";
    cin >> a;

    cout << "Enter array size: ";
    cin >> x;

    cout << "Enter elements: ";
    for (int i = 0; i < x; i++) {
        int element;
        cin >> element;
        v.push_back(element);
    }

    cout << "Entered elements: ";
    for (int i = 0; i < x; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Pairs with sum " << a << ": ";
    for (int i = 0; i <= v.size() - 2; i++) {
        for (int j = i + 1; j <= v.size() - 1; j++) {
            if (v[i] + v[j] == a) {
                cout << "(" << i << "," << j << ") ";
                
            }
        }
    }
    cout << endl;

    return 0;
}
