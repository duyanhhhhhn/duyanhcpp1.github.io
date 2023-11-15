#include <iostream>
using namespace std;
int a,b;
int Tong(int a , int b ){
    return a+b;
}
float Thuong(int a , int b){
    return (float)a/b;
}
int Hieu(int a , int b){
    return a-b;
}
int Tich(int a , int b){
    return a*b;
}
int main(){
    cout << "nhap 2 so nguyen a va b : ";
    cin >> a >> b ;
    cout << "Tong la : "<<Tong(a,b)<<endl;
    if( Tong(a,b)%2 ==0 ){
        cout <<" Tong la so chan ";
    }else {
        cout << " Tong la so le :";
    }
    cout << " Hieu la : "<<Hieu(a,b)<<endl;
    if(b!=0){
        cout << "Thuong : "<<Thuong(a,b)<<endl;
    }else {
        cout<< "Khong co thuong cua a, b ";
    }
    cout << "Tich la : "<<Tich(a,b);

}
// #include<iostream>
// using namespace std;

// int Tong(int a, int b) {
// 	return a + b;
// }

// int Hieu(int a, int b) {
// 	return a - b;
// }

// int Tich(int a, int b) {
// 	return a * b;
// }

// int Thuong(int a, int b) {
// 	return (float)a / b;
// }

// void main() {
// 	int a, b;
// 	cout << "Nhap 2 so nguyen: ";
// 	cin >> a >> b;
// 	cout << "Tong: " << Tong(a, b) << endl;
// 	cout << "Hieu: " << Hieu(a, b) << endl;
// 	cout << "Tich: " << Tich(a, b) << endl;
// 	if (b != 0) {
// 		cout << "Thuong: " << Thuong(a, b) << endl;
// 	}
// 	else {
// 		cout << "Thuong: Khong the chia cho 0";
// 	}
// }