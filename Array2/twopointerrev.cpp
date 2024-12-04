#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int size;
    cout<<"Enter size : ";
    cin>>size;
    cout<<"Enter elements :";
    for(int i=0;i<=size-1;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<=size-1;i++){
        cout<<v[i]<<" ";
         //cout << v[i] << " ";
    }
    cout<<endl;
    
    int i=0;
    int j=size-1;
    while(i<j){
        int temp;
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        cout<<v[j]<<" ";
        i++;
        j--;

    }
    cout << "Reversed elements: ";
    for (int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }

    

}