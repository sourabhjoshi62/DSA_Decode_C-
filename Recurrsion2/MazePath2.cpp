#include<iostream>
using namespace std;
int maze(int er, int ec){
    if(er<1||ec<1) return 0;
    if(er==1 && ec==1) return 1;
    int right = maze(er,ec+1);
    int down = maze(er+1,ec);
    int ans= right + down;
    return ans;

}
void Printpath(int er, int ec, string s){
    if(er<1||ec<1) return;
    if(er==1 && ec==1)
    {
        cout<<s<<endl;
        return;
    }
    Printpath(er,ec+1,s+'R');
    Printpath(er+1,ec,s+'D');
    
}
int main(){
    cout<<maze(3,3)<<endl;
    Printpath(3,3," ");

}