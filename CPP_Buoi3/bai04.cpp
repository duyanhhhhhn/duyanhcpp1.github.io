#include <iostream>
using namespace std;
int main (){
    int ngay, gio;
    cout<< " nhập số ngày làm việc của nhân viên : ";
    cin >> ngay;
    cout << "nhập số giờ làm việc của nhân viên : ";
    cin >>gio ;
    int luong1gio = 150; 
    int luongthang = luong1gio * gio * ngay;
    int thue;
    if (luongthang > 15000 ){
        thue = (30*luongthang)/100;
    }else if ( 7000 < luongthang && luongthang < 15000){
        thue = (20*luongthang)/100;
    }else {
        thue = (10*luongthang)/100;
    }int luongthuclanh = luongthang - thue ;
    cout << "Số giờ làm việc trong tháng là  : "<<ngay*gio<<endl;
    cout << "Thuế TNCN là : "<<thue<<endl;
cout << "Lương nhân viên nhận được là : "<<luongthuclanh;
}