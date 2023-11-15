#include <iostream>
using namespace std;
int Tong( int n ){
    int sum = 0 ;
    for ( int i = 1; i<= n; i++ ){
        sum+= i ;
    }
    return sum;
}
int main(){
    int n;
    cout << " Nhap so nguyen n : "<<endl;
    cin >> n;
    cout << " Tong can tinh la : "<<Tong(n);
}