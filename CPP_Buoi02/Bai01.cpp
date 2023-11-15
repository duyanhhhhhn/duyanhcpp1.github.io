#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<< "nhap vao ba so a,b,c";
    cin >> a >>b >> c;
    int max = a;
    if(b>max){
        max = b;
    }if(c>max){
        max=c; 
    }cout<<"so lon nhat trong ba so la : "<<max;

}
