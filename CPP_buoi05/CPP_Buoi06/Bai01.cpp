#include <iostream>
using namespace std;
int main(){
    // cau a 
    int n  ;
    cout <<" Nhap so nguyen duong n : ";
    cin >> n;
    cout << " cac so nguyen tu 1 den n : ";
    for (int i = 1; i<=n; i++){
    cout << i << " "<<endl;}
    // cau 1.2
     cout <<"Các số nguyên chẵn từ n đến 1 là : "<<endl;
    for ( int i = n ; i>=1 ; i--){
    if( i %2 == 0 ){
        cout << i << " ";
    }
    }
    // cau 1.3 
    int dem = 0;
    cout << " Các số nguyên lẻ từ 0 đến n là : "<<endl;
    for ( int i = 0 ; i<= n; i++ ){
        if ( i % 2 != 0 ){
            cout << dem << " ";
        }dem++;
    } 
    // cau 1.4
    int tong = 0;
        int tich = 1 ; 
    for ( int i = 1; i<=n;i++){
        tong = tong + i; 
        tich = tich * i ;
    }cout << " Tổng các số từ 1 đến n là : "<<tong<<endl;
    cout << "Tích các số từ 1 đến n là : "<<tich<<endl;
    // cau 1.5
    for ( int i = 1 ; i <= n ; i++){
        if ( n%i == 0 ){
            cout << " Ước số của n là : "<< i <<endl;
        }

    }
    // cau 1.6
    dem = 0;
    for ( int i=1 ; i<=n; i++){
        if (n%i == 0 ){
            dem++;
        }
    }cout << "Số lượng ước số của "<< n << "là : "<<dem;
}