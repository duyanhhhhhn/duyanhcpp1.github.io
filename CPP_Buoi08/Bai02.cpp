#include <iostream>
using namespace std;
int n;
const float pi = 3.14;
void luaChon1() {
    int r;
    cout << " nhap ban kinh hinh tron ";
    cin >> r;
    cout << " dien tich la :"<<pi*r*r<<endl;
    cout << " Chu vi hinh tron la : "<< 2*pi*r<<endl;
}
void luaChon2(){
    int a,b;
    cout << " Nhap do dai 2 canh : "<<endl;
    cin>> a >> b ;
    cout << "Chu vi hinh chu nhat la :"<<(a+b)*2<<endl;
    cout << " Dien tich hinh chu nhat la : "<<a*b<<endl;
}
void luaChon3(){
    int a,b;
    cout <<" nhap do dai 2 canh : "<<endl;
    cin >> a;
    cout << "Chu vi hinh vuong la : "<<a*4<<endl;
    cout << "dien tich hinh vuong la :"<<a*a<<endl;
}
int main(){
    int luachon;
    cout <<" 1. Hinh tron"<<endl;
    cout << " 2. Hinh chu nhat"<<endl;
    cout <<" 3. Hinh vuong  "<<endl;
    cout <<" Nhap vao lua chon : "<<endl;
    cin>> luachon;
    switch(luachon){
        case 1 : luaChon1();break;
        case 2 : luaChon2();break;
        case 3 : luaChon3();break;
    }
    }    
