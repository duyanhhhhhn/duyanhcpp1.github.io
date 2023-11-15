#include <iostream>
using namespace std;
int main(){
    int a , b;
    do{
        cout << "Nhập 2 số nguyên dương a và b : ";
        cin >> a >> b;
    }while ( a<=0 && b <=0 );
    while(a != b ){
        if(a >b ){
            a = a -b;
        }else {
            b=b-a;
        }
    }cout <<" UCLn la : "<<a;
}