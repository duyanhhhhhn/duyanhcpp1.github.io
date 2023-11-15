#include <iostream>
using namespace std;
int main(){
    int ngay,thang,nam;
    int ngaymai = ngay +1;
    int ngayhomqua = ngay -1;
    cout<<"Nhập vào ngày :";
    cin >>ngay;
    cout<< "Nhập vào tháng : ";
    cin >> thang;
    cout << " Nhập vào năm : ";
    cin >> nam;
   switch ( thang){
        case 4 :
        case 6 :
        case 9 :
        case 11 : ngay = 30;break;
        case 2 :
        if((nam %4 == 0 && nam % 100 !=0 )|| nam % 400 == 0 ){
            ngay = 29;
        }else {
            ngay = 28;
        }
        default : ngay = 31 ;break;
   }
   if (ngaymai > 31 ){
    if (thang ==12 ){
        ngaymai = 1; 
         nam = nam + 1;
        thang = thang +1; 
    }else {
        thang = thang +1 ;
    }
   }
   if(ngayhomqua < 1 ){
        if(thang == 1 ){
            thang = 12;
            nam = nam -1 ;
        }else{
            thang = thang -1;
        }
   }cout<<"Ngày mai của ngày đó là "<<ngaymai<<" "<<thang<<" "<<nam<<endl;
   cout << " Ngày hôm qua của ngày đó là :"<<ngayhomqua<<" "<<thang<<" "<<nam; 
    }
    
