#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Masukan Angka: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int z=1; z<=i; z++){
            cout<<"*";
        }
        cout<<endl;
    }
}
