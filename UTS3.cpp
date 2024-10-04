#include<iostream>
using namespace std;

int penjumlahan(int a, int b){
    return a+b;
}

int pengurangan(int a, int b){
    return a-b;
}

int perkalian(int a, int b){
    return a*b;
}

int pembagian(int a, int b){
    return a/b;
}



int main(){
    int pilih, a, b;

    cout<<"======= Operasi Matematika ======="<<endl;
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"=================================="<<endl;

    cout<<"Pilih operasi matematika: ";
    cin>>pilih;

    switch (pilih){
        case 1:
        cout<<"Masukan angka ke - 1: ";
        cin>>a;
        cout<<"Masukan angka ke - 2: ";
        cin>>b;
        cout<<"Hasil: "<<penjumlahan(a,b)<<endl;
        break;

        case 2:
        cout<<"Masukan angka ke - 1: ";
        cin>>a;
        cout<<"Masukan angka ke - 2: ";
        cin>>b;
        cout<<"Hasil: "<<pengurangan(a,b)<<endl;
        break;

        case 3:
        cout<<"Masukan angka ke - 1: ";
        cin>>a;
        cout<<"Masukan angka ke - 2: ";
        cin>>b;
        cout<<"Hasil: "<<perkalian(a,b)<<endl;
        break;

        case 4:
        cout<<"Masukan angka ke - 1: ";
        cin>>a;
        cout<<"Masukan angka ke - 2: ";
        cin>>b;
        cout<<"Hasil: "<<pembagian(a,b)<<endl;
        break;
    }

}
