#include <iostream>
using namespace std;
int main(){
    // int thang,nam;
    // cout<<" nhap vao thang : ";
    // cin>>thang;
    // cout<<"nhap vao nam ";
    // cin>> nam;
    // if( thang < 1 || thang > 12 ){
    //     cout << " thang khong hop le "<<endl;
    // }else {
    //     int ngayTrongThang ; 
    // if ( thang == 2 && ((nam %4 == 0 && nam % 100 !=0 )|| nam % 400 == 0 )){
    //     int ngayTrongThang;
    // }else { 
    //     int cacngaytrongthang[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //     ngayTrongThang = cacngaytrongthang[thang - 1 ];
    // } 
    // cout << "Tháng " << thang << " năm " << nam << " có " << ngayTrongThang  << " ngày." << endl;
    // }
    // cach 2 
    int thang, nam;
    cout << " nhap vao thang va nam ";
    cin>> thang >> nam;
    if ( thang == 1 ||thang == 3 ||thang == 5 ||thang == 7 ||thang == 8 || thang == 10 ||thang == 12){
        cout<<"31 ngay";
    }else if (thang == 4 ||thang == 6 || thang == 9 ||thang ==11 ){
        cout << " 30 ngay";
    }else if ( thang == 2 ){
        if ( (nam %4 == 0 && nam % 100 !=0 )|| nam % 400 == 0 ){
            cout<<"29 ngay";
        }else {
            cout<<"28 ngay";
        }
    }
}


