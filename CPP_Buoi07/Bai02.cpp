#include <iostream>
using namespace std;
int main(){
    int n;
    cout << " nhap vao so nguyen duong n : ";
    cin >> n; 
    int* a = new int[n];
   cout << " nhap mang : ";
    for (int i =0 ; i< n; i++){
        cin >> a[i];

    }cout << " Mang vua nhap la :";
    for ( int i = 0 ; i <n ;i++){
        cout << a[i]<< " ";
    }
    int nhoNhat = a[0];
    int lonNhat = a[0];
    for (int i = 0; i < n; i++){
        if ( a[i]>lonNhat){
        lonNhat= a[i];
    }   if (a[i] < nhoNhat){
        nhoNhat = a[i];
    }
     
}cout << "so lon nhat la:  "<<lonNhat<<endl;
cout <<"so nho nhat la :"<<nhoNhat<<endl;
int demA = 0;
int demB = 0;
int demC= 0;
int x;
cout << "nhap so nguyen x  : ";
cin >> x;
for(int i = 0; i<n; i++ ){
    if( a[i]<x){
        demA++;
    }if( a[i]== x){
        demB++;
    }if( a[i]>x ){
        demC++;
    } 
}cout <<" tổng các số nhỏ hơn x là "<<demA<<endl;
cout<<"các số bằng x là : "<<demB<<endl;
cout << " các số lớn hơn x là : "<<demC<<endl;
// Đếm SNT
int demUoc = 0;
int demSNT = 0 ;
for( int i = 1 ; i<= n; i++){
    if( n % i == 0){
        demUoc++;
    }
    if( demUoc == 2 ){
        demSNT++;
    }
}cout << "Số nguyên tố trong mảng là : "<<demSNT<<endl;
// Các số chính phương 
	for (int i = 0; i < n; i++)	{
		if (a[i] == x) {
			cout << "Vi tri dau tien cua x la: " << i << endl;
			break;
		}
	}
	cout << "Danh sach so chinh phuong: ";
	for (int i = 0; i < n; i++)	{
		if (sqrt(a[i]) == (int)sqrt(a[i])) {
			cout << a[i] << " ";
		}
	}
	cout << endl;
	
	// Sắp xếp
	for (int i = 0; i < n - 1; i++)	{
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
	cout << "Mang sau khi sap xep la: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
