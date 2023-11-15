#include <iostream>
using namespace std;
int main(){
    int ngay,thang,nam;
    cout << " nhap vao ngay, thang va nam ";
    cin>>ngay>> thang >> nam;
    if ( nam < 0 ){
        cout<<" nam khong hop le ";
    }else if (thang < 1 || thang > 12 ){
        cout << " thang khong hop le ";
    }else {
        int max = 0;
    switch (thang){
        case 4 : case 6 :
        case 9 :
        case 11 : cout<< " 30 ngay ";break;
        case 2 :
        if((nam %4 == 0 && nam % 100 !=0 )|| nam % 400 == 0 ){
            max = 29;
        }else {
            max = 28;
        }
        default : max = 31 ;break;

    }
    if ( ngay < 1 || ngay > max ){
        cout <<"ngay khong hop le ";
    }else {
        cout << "Hop le ";
    }
    }
}