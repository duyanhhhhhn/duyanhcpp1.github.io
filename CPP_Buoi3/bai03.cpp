#include <iostream>
using namespace std;
int main(){
    int ngay,thang,nam; 
    cout << "nhap vao ngay , thang , nam ";
    cin >> ngay >> thang >> nam ;
    switch(thang){
         case 1 :ngay = ngay ;break; 
         case 2 :ngay = 30 + ngay;break; 
         case 3 :ngay = 28 + 30 + ngay;break; 
         case 4 :ngay = 28 + 30 +31 + ngay;break; 
         case 5 :ngay = 28 + 30 + 31 + 30 + ngay;break; 
         case 6 :ngay = 28 + 30 + 31 + 30 + 31 + ngay;break; 
         case 7 :ngay = 28 + 30 + 31 + 30 + 31 + 30 + ngay;break; 
         case 8 :ngay = 28 + 30 + 31 + 30 + 31 + 30 + 31 + ngay;break; 
         case 9 :ngay = 28 + 30 + 31 + 30 + 31 + 30 + 31 + 30 + ngay;break; 
         case 10 :ngay = 28 + 30 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + ngay;break; 
         case 11 :ngay = 28 + 30 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30 + ngay;break; 
         case 12 :ngay = 28 + 30 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + ngay;break; 
    }cout << " ngay đó là ngày thứ  "<<ngay<<" trong năm ";

}