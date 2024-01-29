#include<iostream>
using namespace std;

int main(){
    bool yes = !0;
    bool no = !yes;

    if(!no)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}