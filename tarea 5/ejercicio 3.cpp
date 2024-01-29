#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double big = 1.2356e6;
    double small = 1e-4;

    cout << fixed << setprecision(4) << big + small << endl;

    return 0;
}