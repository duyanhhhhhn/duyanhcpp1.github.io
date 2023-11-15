#include <iostream>
using namespace std;
int main(){
    // 1.1
    int n;
    cout << " Nhap so nguyen duong n : ";
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    cout << " Nhap mang a :"<<endl;
    for ( int i = 0; i <n; i++){
        cout <<"a["<< i <<"] =  ";
        cin >> a[i];
    }
    cout << " nhap mang b :"<<endl;
    for ( int i = 0; i< n; i++ ){
        cout <<"b["<< i << "] =  ";
        cin >> b[i];
    }
    cout << "Mang a : "<<endl;
    for (int i = 0; i< n; i++){
        cout << a[i]<<" ";
    }
    cout << "mang b : ";
    for ( int i = 0; i<n ;i++){
        cout << b[i]<< " ";
    }
    // 1.2
    int tong = 0;
    int tong1 = 0;
    for ( int i = 0 ; i<n ; i++){
        tong += a[i];
        tong1 += b[i];

    }
    cout <<"Tổng của mảng a là :"<<tong<<endl;
    cout<< "Tổng của mảng b là : "<<tong1<<endl;
    if(tong >tong1){
        cout << " Mảng a lớn hơn mảng b ";
    }else{
      cout<<"Mảng b lớn hơn mảng a ";
    }

}
