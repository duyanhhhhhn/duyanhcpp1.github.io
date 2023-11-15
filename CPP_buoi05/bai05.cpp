#include <iostream>
using namespace std;
int main(){
    int n;
    do{
        cout << "Nhập số nguyên dương n : ";
        cin >> n; 
    }while(n<=0);
    int i = 1;
    int x,tong =0;
    while ( i<=n){
        cout << "nhập só nguyên thứ "<<i<<" : ";
        cin >> x;
        tong = tong +x;
        i++;
    }cout << "Tổng là : "<<tong;
}