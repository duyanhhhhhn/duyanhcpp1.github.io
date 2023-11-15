#include <iostream>
using namespace std;
int Demsoluong(int x){
    int dem = 0;
    while(x>0){
        x/=10;
        dem++;
    }
    return dem;
}
void TachChuSo(int x, int a[], int n){
    int i = n-1;
    while (x>0){
        a[i]=x%10;
        x/=10;
        i--;
    }
}
int Tong(int a[], int n ){
    int tong = 0;
    for( int i = 0; i <n ; i++){
        tong += a[i];
    }return tong;
}
int Chusolonnhat(int a[], int n ){
    int max = 0;
    for ( int i = 0; i < n ; i++){
        if(a[i]>max){
            max = a[i];
        }
    }return max;
}
void Timsodaonguoc(int a[], int n ){
    for( int i = 0 ; i < n/2; i++){
        int tam = a[i];
        a[i] = a[n-1-i];
        a[n-1-i]=tam;
    }
    
}
void Xuat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
bool Kiemtradoixung( int x ){
    int sodoixung = 0;
    int sogoc= x;
    while ( x> 0 ){
        int donvi = x%10;
        sodoixung = sodoixung*10 + donvi;
        x/=10;
    }return (sogoc == sodoixung);
}
int main(){
    int x;
    cout << " Nhap vao so nguyen duong x : ";
    cin >> x;
    int n = Demsoluong(x);
    cout <<" So luong chu so : "<<n;
    int *a = new int[n];
    TachChuSo(x,a,n);
    int tongchuso = Tong(a,n);
    cout << " Tong chu so la "<<tongchuso<<endl;
    int max = Chusolonnhat(a,n);
    cout << " Chu so lon nhat la : "<<max<<endl;
    cout<<" Mang dao nguoc la : ";
    Timsodaonguoc(a,n);
    Xuat(a,n);
    if(Kiemtradoixung(x) ){
        cout << x << " x la so doi xung ";
    }else {
        cout <<" x khong phai la so doi xung ";
    }

    
    
  
}