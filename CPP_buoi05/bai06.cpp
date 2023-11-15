#include <iostream>
using namespace std;
int main(){
    int n;
    int i = 1;
    do{
        cout << " nhap so nguyen duong n :";
        cin >> n;
    
    }while ( n<=0 );
    int sole = 0;
    int sochan =0; 
    int soam = 0;
    int soduong = 0;
    while (i<n ){
        int x;
        cout << "nhap so nguyen thu "<<i<<":";
        cin >>x;
        i++;
        if (x % 2== 0 ){
            sochan++;
        }else {
            sole++;
        }if(x> 0){
            soduong++;
        }else if(x<0){
            soam++;
        }
    }
    cout <<sochan<<endl;
    cout<< sole<<endl;
    cout<<soam<<endl;
    cout<<soduong<<endl;


}
