#include <iostream>
using namespace std;
int UCLN( int a , int b){
    while (a !=b ){
        if ( a > b ){
            a= a -b;
        }else {
            b = b-a;
        }
    }return a;

}
int BCNN(int a, int b){
    return a*b/UCLN(a,b);
}
int main(){
    int a,b;
    cout <<" nhap 2 so nguyen duong : ";
    cin >> a >> b ;
    cout << " UCLN "<<UCLN(a,b)<<endl;
    cout << "BCNN"<<BCNN(a,b);

}