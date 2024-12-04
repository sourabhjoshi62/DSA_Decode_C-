#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Declare a vector of integers
    vector<int> v;

    // Add elements to the vector using push_back
    v.push_back(9);
    v.push_back(10);
    v.push_back(23);

    // Print the elements of the vector
    for(int i=0; i <= v.size() - 1; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Remove the last element from the vector using pop_back
    v.pop_back();

    // Print the elements of the vector after popping the last element
    for(int i=0; i <= v.size() - 1; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Modify the first element of the vector
    v[0] = 999;

    // Print the elements of the vector after modifying the first element
    for(int i=0; i <= v.size() - 1; i++) {
        cout << v[i] << " ";
    }

    // Print the size of the vector
    cout << v.size() << endl;

    // Print the capacity of the vector
    cout << v.capacity();

    return 0;
}
