/*
#include<iostream>
using namespace std;
int main(){

    for(int i=1;i<=200;i++)
    {
        if( i % 19 == 0)
        cout<<i<<endl;
    }
loop executes 190-19=171 times therefore this is ghatiya method........below method is good
}
*/
#include<iostream>
using namespace std;

int main() {
    for (int i = 19; i <= 190; i = i + 19) {
        cout << i << endl;
    }

    return 0;
}
