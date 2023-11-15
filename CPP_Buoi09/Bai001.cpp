#include <iostream>
using namespace std;
void Nhap(int a[], int n ){
    for ( int i = 0; i< n;i++){
        cin>>a[i];
    }

}
void Xuat(int a[], int n ){
    for (int i = 0; i <n ; i++){
        cout << a[i]<<" ";
    }
}
int Tong(int a[],int  n){
    int tong = 0; 
    for(int i = 0; i <n ;i++){
        tong += a[i];
    }return tong;
}
int Demsochan(int a[], int n ){
    int dem = 0;
    for ( int i = 0; i <n; i++){
        if ( a[i]%2 == 0 ){
        dem++;
    }
    }return dem;
}
int demSoDuong( int a[], int n ){
    int dem = 0;
    for ( int i = 0; i <n ; i++){
        if( a[i]> 0 ){
            dem++;
        }
    }return dem;
}
int soLonNhat(int a[], int n ){
    int max = a[0];
    for ( int i = 1 ;i <n; i++){
        if( a[i] > max){
            max = a[i];
        }
        }return max;
}



int main(){
    int n;
    cout<< " Nhap so lượng phần tử n : ";
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    cout<<"mang a :";
    Nhap(a,n);
    cout<<"mang a :";
    Xuat(a,n);
    cout << " Mang b : ";
    Nhap(b,n);
    cout << " Mang b : ";
    Xuat(b,n);
    cout <<"Tong a : "<<Tong(a,n);
    cout<< "Tong b : "<<Tong(b,n);
    if(Tong(a,n)> Tong(b,n )){
        cout<<" Tổng a lớn hơn tổng b "<<endl;
    }else {
        cout<< " Tổng b lớn hơn tổng a "<<endl;
    }
    int demA = Demsochan(a,n);
    int demB = Demsochan(b,n);
    if(demA > demB){
        cout<< " A co nhieu so chan hon B"<<endl;
    }else {
        cout << " B co nhieu so chan hon A ";
    }
    int demDA = demSoDuong(a,n);
    int demDB = demSoDuong(b,n);
    if(demDA > demDB){
        cout << " A có nhiều số dương hơn B ";
    }else {
        cout << " B có nhiều số dương hơn A ";
    }
    int MaxA = soLonNhat(a,n);
    int MaxB = soLonNhat(b,n);
    cout << "Số lớn nhất của mảng A là :"<<MaxA;
    cout << " Sô lón nhất cuả mảng B là : "<<MaxB;

}