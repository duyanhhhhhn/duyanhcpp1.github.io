#include <iostream>
using namespace std;
bool kiemTraSNT(int n ){
    if( n < 2 ){
        return false;
    }for ( int i = 2; i*i <= n; i ++ ){
        if(n%i == 0 ){
            return false;
        }
    }return true;

}
int main (){
    int n;
    cout << " nhập số nguyên dương n :";
    cin >> n;
    cout<< " Day " << n <<" so nguyen to dau tien la : ";
    int dem = 0;
    int i = 2;

    while (dem < n) {
        if (kiemTraSNT(i)) {
            cout << i << " ";
            dem++;
        }
        i++;
    }

}