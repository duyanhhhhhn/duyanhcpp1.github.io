#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"nhap 2 so a,b :";
    cin>> a >> b;
    if( a==0){
        if(b== 0){
            cout <<"phuong trinh co vo so nghiem"<<endl;
        
        }else {
            cout<<"phuong trinh vo nghiem"<<endl;
        }
    }if(a!=0){
        cout<<"phuong trinh co nghiem x la : "<<-b/a;
    }
}