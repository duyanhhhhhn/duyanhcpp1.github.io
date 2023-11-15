#include <iostream>
using namespace std;
int main(){
    // int a[5];
    // cout << " Nhap mang : "<< " ";
    // for ( int i = 0; i<5 ; i++ ){
    //     cin >> a[i];
    // }
    // cout <<" mang vua nhap la : ";
    // for ( int i = 0 ; i <5 ; i++){
    //     cout << a[i]<< " ";
    // }
    int n;
    cout << " nhap vap so nguyen duong n : ";
    cin >> n; 
    int* a = new int[n];
    cout << " nhap mang : ";
    for (int i =0 ; i< n; i++){
        cin >> a[i];

    }cout << " Mang vua nhap la so:";
    for ( int i = 0 ; i <n ;i++){
        cout << a[i]<< " ";
    }
    int tong = 0, tich =1 ;
    int i =0;
    for (i = 0; i < n; i++){
            tong += a[i];
            tich *= a[i];
    }cout << " Tong "<< tong<<endl;
    cout << "tich "<<tich<<endl;
    cout << " trung binh cong "<<tong/i;
    
}
