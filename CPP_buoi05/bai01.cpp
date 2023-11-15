#include <iostream>
using namespace std;
int main(){
    int n;
    do{
        cout << " Nhập só nguyên dương n : ";
        cin >> n;
    }while ( n<=0);
        int i=1;
        while (i<=n){
            if ( i%2 == 0 || n % i ==0 || i%3 == 0){
                cout << i << " ";
            }i++;

        }
    }
    