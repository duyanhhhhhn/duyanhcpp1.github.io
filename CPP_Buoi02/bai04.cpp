#include <iostream>
using namespace std;
int main(){
    float a,b,c,x1,x2,denta;
    cout<< " nhap vao ba so a , b, c : ";
    cin >> a >> b >> c;
    denta = b*b-4*a*c;
    if(denta>0){
        x1 = (-b+sqrt(denta))/(2*a);
         x2 = (-b-sqrt(denta))/(2*a);
         cout<<"Phuong trinh co 2 nghiem x1 va x2 la : "<<x1<<" "<<x2;
    }else if ( denta==0){
        x1 = -b/(2*a);
        cout<<"Phuong trinh co nghiem kep x1 = x2 : "<<x1;
    }else{
        cout<<"phuong trinh vo nghiem";
    }
}