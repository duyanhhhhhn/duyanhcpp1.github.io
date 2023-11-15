#include <iostream>
using namespace std;
int main (){
    int i,s3,s4; 
    // 1.1
    int n,s1;
    s1 = 0 ;
    cout << "Nhập số nguyên dương n : ";
    cin >> n; 
    for ( int i = 1 ; i<=n ; i++){
     s1 += i*i;
    }
cout <<"Tổng :"<<s1<<endl;
// 1.2
float s2 = 1;
for ( int i = 1; i <= n ; i++){
    s2 += (1.0/i);
}cout << " Tổng 2 : "<<s2<<endl;
// 1.3
for ( int i = 1; i <= n ; i++){
s3 +=i/(i+1.0);
cout << "s3 = :"<<s3<<endl;
}
// 1.4
int tong;
for ( int j = 1; j<=i;j++){
    tong += j;
} s4 +=tong;
cout <<" s4= :"<<s4<<endl;
}