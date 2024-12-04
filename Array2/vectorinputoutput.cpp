#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Declare a vector of integers
    vector<int> v;
    
    for(int i=0; i <= v.size() - 1; i++) {
       // cin >> v[i] ;
        int x;
        cin>>x;
        v.push_back(x);

    }

    for(int i=0; i <= v.size() - 1; i++) {
        cout << v[i] << " ";
    }

   
}
