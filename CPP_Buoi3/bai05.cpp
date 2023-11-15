#include <iostream>
using namespace std;
int main(){
    float diencu,dienmoi,dientieuthu;
    int tiendien;
    int gia1,gia2,gia3 , gia4;
    int thue = (10*tiendien/100);
    gia1 = 1242;
    gia2 = 1304;
    gia3 = 1651;
    gia4 = 1912;
    cout << " nhập số điện cũ : ";
    cin>> diencu;
    cout <<" nhập số điện mới : ";
    cin >> dienmoi;
    dientieuthu = dienmoi - diencu; 
    if (dientieuthu <= 100 ){
        tiendien = dientieuthu * gia1;
    }else if (dientieuthu <= 150){
        tiendien = 100*gia1 + (dientieuthu-100)*gia2;
    }else if (dientieuthu <= 200){
        tiendien = 100*gia1 + 50*gia2 + (dientieuthu-150)*gia3;
    }else { 
        tiendien = 100*gia1 + 50*gia2 +50*gia3 +(dientieuthu-200)*gia4;
    }tiendien = tiendien + thue; 
    cout << "Tiền điện phải trả là : "<<tiendien<<"VND";
}