#include <iostream>
using namespace std;
bool KTSNT(int n ){
    if (n < 2 ){
        return false;
    }
    for ( int i = 2 ; i<=n/2; i++){
        if( n%i == 0){
            return false;
        }
    } return true;
}
int main(){
    int n;
    cout << "Nhap so nguyen to n : ";
    cin>> n;
    if(KTSNT(n)== true){
        cout << "n la SNT";
    }else {
        cout << " n khong phai la SNT ";
    }
}