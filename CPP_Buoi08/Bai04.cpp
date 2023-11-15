#include <iostream>
using namespace std;
bool kiemTraSNT(int n ){
    if( n < 2 ){
        return false;
    }for ( int i = 2; i <= n/2; i ++ ){
        if(n%i == 0 ){
            return false;
        }
    }return true;

}
int main(){
    int n;
    cout << " Nhap vao so nguyen n : ";
    cin >> n; 
    cout << " cac so nguyen to khong vuot qua "<<n << "la : ";
    for (int i = 2; i <= n; i++) {
        if (kiemTraSNT(i)) {
            cout << i << " ";
        }
    }
}

