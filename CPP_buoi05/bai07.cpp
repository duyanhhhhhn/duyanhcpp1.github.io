#include <iostream>
using namespace std;
int main() {
    int n, tong = 0;
    do{
    cout << "Nhập số nguyên dương n: ";
     cin >> n;
    }while(n<=0);
    while (n > 0){
        int chuSo = n % 10;
        tong = tong+ chuSo;
        n /= 10;
    }

    cout << "Tổng các chữ số của n là: " << tong;
}