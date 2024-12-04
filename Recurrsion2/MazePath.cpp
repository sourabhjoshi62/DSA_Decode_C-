#include<iostream>
using namespace std;
int maze(int sr,int sc, int er, int ec){
    if(sr>er||sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int right = maze(sr,sc+1,er,ec);
    int down = maze(sr+1,sc,er,ec);
    int ans= right + down;
    return ans;

}
void Printpath(int sr,int sc, int er, int ec, string s){
    if(sr>er||sc>ec) return;
    if(sr==er && sc==ec)
    {
        cout<<s<<endl;
        return;
    }
    Printpath(sr,sc+1,er,ec,s+'R');
    Printpath(sr+1,sc,er,ec,s+'D');
    

}
int main(){
    Printpath(1,1,3,3," ");
}