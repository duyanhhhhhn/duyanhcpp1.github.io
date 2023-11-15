#include <iostream>
using namespace std;
// void HoanVi(int a, int b ){
//     int tam = a;
//     a  = b;
//     b  =tam;
// }
void Nhap(int a[],int n ){
    for( int i = 0 ; i<n ;i++){
        cin >> a[i];
    }
}
void Xuat(int a[], int n ){
    for (int i =0; i <n ;i++){
        cout << a[i]<< " ";
    }
}
int Tong(int a[], int n) {
    int tong = 0;
    for (int i = 1; i < n; i+=2) {
            tong += a[i];
    }
    return tong;
}
int Tich(int a[], int n){
    int tich = 1;
    for (int i = 0 ; i< n;i++){
        if(a[i]%2 == 0 ){
            tich *=a[i];
        }
    }
    return tich;
}
int SoDuongNhoNhat(int a[], int n ){
    int min;
    int i= 0;
    while(a[i] <= 0 ){
        i++;
        if(i>=n ){
            return -1;
        }
    }
min = a[i];
for(; i<n;i++){
    if (a[i] > 0 && a[i] < min) {
			min = a[i];
		}
	}
	return min;
}
void DaoNguocMang(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        // Hoan vi phan tu a[i] voi phan tu a[n-1-i]
        int tam = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = tam;
    }
}
void Mangtangdan(int a[], int n){
    for (int i = 0;i <n-1;i++ ){
        for(int j = i ;j<n;j++){
            if(a[i]>a[j]){
                int tam = a[i];
                a[i]= a[j];
                a[j]=tam;
            }
        }
    }
}


int main(){
    int n;
    cout << "Nhap so luong phan tu n : ";
    cin >> n;
    int *a = new int[n];
    cout <<" Mang a : ";
    Nhap(a,n);
    cout<<" Mang vua nhap : ";
    Xuat(a,n);
    cout << " Tong la : "<<Tong(a,n);
    cout << endl;
    cout << "Tich la : "<<Tich(a,n);
    cout << endl;
    int min =SoDuongNhoNhat(a,n);
    if( min == -1){
        cout<< " Mang khong co so duong "<<endl;
    }else {
        cout <<"So duong nho nhat cua mang la "<<min<<endl;
    }
    cout << "Mang sau khi dao nguoc: ";
	DaoNguocMang(a, n);
	Xuat(a, n);
    cout << " mang sap xep tang dan ";
    Mangtangdan(a,n);
    Xuat(a,n);
}