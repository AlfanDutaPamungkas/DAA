#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
    int p, l, luas;
    cout<<"masukkan panjang : ";
    cin>>p;
    
    if (cin.fail() || p % 10 != p) {
        cout<<"input bukan angka ";
    } 

    return 0;
}