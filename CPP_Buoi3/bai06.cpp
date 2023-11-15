#include <iostream>
using namespace std;
int main ( ){
    int a,b,c;
    cout << "nhập độ dài cạnh a : "<<endl;
    cin >>a ;
    cout << "nhập độ dài cạnh b : "<<endl;
    cin >> b ;
    cout <<" nhập độ dài cạnh c : "<<endl;
    cin >> c ;
    float chuvi = a+b+c;
    float p = chuvi/2;
    float  dientich = sqrt(p * (p - a) * (p - b) * (p - c));
    if ( a== b && b== c ){
        cout << "Đây là một tam giác đều "<<endl;
    }else if ( a==b || b == c ||a==c ){
        cout << "Đây là một tam giác cân"<<endl;
    }else if ( a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a){
        cout << " Đây là một tác giác vuông"<<endl;
    }else {
        cout << " Đây là một tam giác thường ";
    }cout <<"Chu vi tam giác la :  "<<chuvi<<endl;
    cout << " Diện tích tam giác là : "<<dientich<<endl;
}