#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &a)//void change(vector<int> &a)
{
    a[0]=100;
    for(int i=0; i < a.size(); i++){
        cout << a[i] << " ";
}
cout<<endl;
}

int main()
{
    // Declare a vector of integers
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    /*for(int i=0; i < v.size(); i++) {
       // cin >> v[i] ;
        int x;
        cin>>x;
        v.push_back(x);

    }*/

    for(int i=0; i < v.size() ; i++) {
        cout << v[i] << " ";
    }
    cout<<endl;
    change(v);
      for(int i=0; i < v.size(); i++) {
        cout << v[i] << " ";
    }


   
}