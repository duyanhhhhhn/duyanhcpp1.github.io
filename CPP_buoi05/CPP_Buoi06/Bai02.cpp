#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Nhập vaò số nguyên dương n : ";
    cin >> n ; 
    int dem = 0;
    for (int i = 1 ; i<=n; i++){
        if(n % i==0 ){
            dem++;
        }
    }if(dem == 2 ){
        cout << " n la so nguyen to ";
    }else {
        cout << "n khong phai";
    }
}