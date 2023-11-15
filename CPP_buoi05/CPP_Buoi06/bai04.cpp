#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Nhập số nguyên dương n : ";
    cin >> n;
     int m = 0;
     int n1 = n;
    while(n>0){
        int m = n*10 +n%10;
        n/=10;
    }cout << "so dao nguoc cua n la :"<<m<<endl;
    if( m == n1 ){
        cout << " n la so doi xung ";
    }else {
        cout << "n khong phai la so doi xung";
    }
}