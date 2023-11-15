#include <iostream>
using namespace std;
int main(){
    int n;
    int i =1;
    do{
        cout <<" nhap so nguyen duong n : ";
        cin >> n ;
    }while ( n<=0 );
    int dem = 0;
    while (i<=n) {
        if( n%i == 0 ){
            dem++;
             cout<<" uoc so cua n la : "<<dem<<endl;
        }i++;
    }if ( dem == 2 ){
        cout <<" n la so nguyen to ";
    }else {
        cout<< " n khong phai so nguyen to ";
    }
}
