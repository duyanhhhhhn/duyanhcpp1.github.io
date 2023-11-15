#include <iostream>
using namespace std;
int main ( ){
    int n = 20, k = 1 , sum = 0 ;
    cout << " Nhap n : ";
    cin >> n;
    while(true ){
        sum += k;
        if(sum > n){
            break;
        }else {
            k++;
        }
    }cout << " So k lon nhat la : "<<k-1;
    }