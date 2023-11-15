#include <iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Nhap vao ba so a,b,c";
    cin >> a>> b >> c;
    if(a<0){
        a=-a;
    }if(b<0){
        b=-b;
    }if(c<0){
        c=-c;
    }cout<<"gia tri tuyet doi cua ba so a , b , c la : "<< a << " "<< b <<" "<< c;
    }