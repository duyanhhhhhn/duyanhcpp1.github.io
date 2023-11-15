#include <iostream>
using namespace std;
int main(){
    int n, tong = 0;
    cout << " Nhap so nguyen duong n :";
    cin >> n;
    for (int i = 1; i<=n; i++){
        if(n%i == 0 ){
            tong = tong+ i;
        }cout <<tong<<" " ;
    }
}