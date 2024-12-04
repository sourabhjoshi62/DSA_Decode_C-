#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int> &v) {
    int i = 0;
    int j = v.size() - 1;

    while (i < j) {
       /* while (v[i] == 0 && i < j) {
            i++;
        }
        while (v[j] == 1 && i < j) {
            j--;
        }

        if (i < j) {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }*/
    while(i<j){
        if(v[i]==0)i++;
        if(v[j]==1)j--;
        if(i<j)break;
        if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }

    }

    cout << "Sorted elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}
}

int main() {
    vector<int> v = {0, 1, 0, 1, 0, 1, 1, 0};

    cout << "Original elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    sort01(v);

    return 0;
}

