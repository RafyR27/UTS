#include<iostream>
using namespace std;

int main(){
    double bb, tb, tbm, h, n;

    cout<<"Berat Badan (kg): ";
    cin>>bb;
    cout<<"Tinggi Badan (cm): ";
    cin>>tb;

    tbm=tb/100;
    n=tbm*tbm;
    h=bb/n;

    if(h >= 40){
        cout<<"Sangat Gemuk";
    } else if(h >= 30 && h <= 39.9){
        cout<<"Gemuk";
    } else if(h >= 25 && h <= 29.9){
        cout<<"Berat Badan Lebih";
    } else if(h >= 18.5 && h <= 24.9){
        cout<<"Berat Badan Ideal";
    } else if(h <= 18.4){
        cout<<"Berat Badan Kurang"<<endl;
    }


    return 0;
}
