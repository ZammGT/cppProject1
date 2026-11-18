#include <iostream>
using namespace std;
int main() {
    string menu[2]={"soto","rawon"};
    int i,jumlah[2],total[2],harga[2]{10000,20000};
    cout<<"================================="<<endl;
    cout<<"SELAMAT DATANG DI WARUNG BAHAGIA"<<endl;
    cout<<"================================="<<endl;
    for(i=0;i<2;i++){
        cout<<"================================="<<endl;
        cout<<"MENU ";
        cout<<menu[i]<<endl;
        cout<<"DENGAN HARGA Rp";
        cout<<harga[i]<<endl;
        cout<<"================================="<<endl;
        cout<<"Masukkan Jumlah Yang Ingin Dibeli : ";
        cin>>jumlah[i];
        total[i]= jumlah[i]*harga[i];
        cout<<"Total Yang Harus Dibayar Rp";
        cout<<total[i]<<endl;
    }
    return 0;
}
