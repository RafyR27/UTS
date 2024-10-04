#include<iostream>
using namespace std;

void ganjil(int n){
    cout<<"Bilangan Ganjil: "<<endl;
    for(int i=1; i<=n; i++){
        if(i%2 == 1){
            cout<< i <<endl;
        }
    }
}

void genap(int n){
    cout<<"Bilangan Genap: "<<endl;
    for(int i=0; i<=n-1; i++){
        if(i%2 == 0){
            cout<< i <<endl;
        }
    }
}

int main(){
    int n;

    cout<<"Masukan angka: ";
    cin>>n;

    ganjil(n);
    cout<<endl;
    genap(n);
}
