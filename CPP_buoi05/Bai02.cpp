#include <iostream>
using namespace std;
int main(){
    int a,b,i;
    do{
    cout << "Nhap 2 so nguyen duong a va b : ";
    cin >> a >> b ;
}while ( a<=0 && b <=0);
i =a;
while (i % a != 0|| i% b != 0  ){
    i++;
}cout << " Boi chung nho nhat la : "<<i;


}