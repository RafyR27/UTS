#include<iostream>
using namespace std;

int npm, nilai_absen, nilai_tugas, nilai_uts, nilai_uas;
string nama;

int hasil_absen(int absen1){
    return absen1 = nilai_absen*0.1;
}

int hasil_tugas(int tugas1){
    return tugas1 = nilai_tugas*0.2;
}

int hasil_uts(int uts1){
    return uts1 = nilai_uts*0.3;
}

int hasil_uas(int uas1){
    return uas1 = nilai_uas*0.4;
}

int total_nilai(int total, int absen1, int tugas1, int uts1, int uas1){
    return total = hasil_absen(absen1) + hasil_tugas(tugas1) + hasil_uts(uts1) + hasil_uas(uas1);
}

void huruf_mutu(int total, int absen1, int tugas1, int uts1, int uas1){
    if(total_nilai(total, absen1, tugas1, uts1, uas1) >= 85 && total_nilai(total, absen1, tugas1, uts1, uas1) < 100){
        cout<<"Huruf Mutu: A"<<endl;
    } else if(total_nilai(total, absen1, tugas1, uts1, uas1) >= 80 && total_nilai(total, absen1, tugas1, uts1, uas1) < 85){
        cout<<"Huruf Mutu: B"<<endl;
    } else if(total_nilai(total, absen1, tugas1, uts1, uas1) >= 75 && total_nilai(total, absen1, tugas1, uts1, uas1) < 80){
        cout<<"Huruf Mutu: C"<<endl;
    } else if(total_nilai(total, absen1, tugas1, uts1, uas1) >= 70 && total_nilai(total, absen1, tugas1, uts1, uas1) < 75){
        cout<<"Huruf Mutu: D"<<endl;
    } else if(total_nilai(total, absen1, tugas1, uts1, uas1) < 70){
        cout<<"Hurur Mutu: E"<<endl;
    }
}

void output(int total, int absen1, int tugas1, int uts1, int uas1){
    cout<<"=========== Nilai Akhir ==========="<<endl;
    cout<<"Nama         : "<<nama<<endl;
    cout<<"NPM          : "<<npm<<endl;
    cout<<"Nilai Absen  : "<<nilai_absen<<endl;
    cout<<"Nilai Tugas  : "<<nilai_tugas<<endl;
    cout<<"Nilai UTS    : "<<nilai_uts<<endl;
    cout<<"Nilai UAS    : "<<nilai_uas<<endl;
    cout<<"============== Hasil =============="<<endl;
    cout<<"Nilai Akhir  : "<<total_nilai(total, absen1, tugas1, uts1, uas1)<<endl;
    huruf_mutu(total, absen1, tugas1, uts1, uas1);
}

int main(){
    int total, absen1, tugas1, uts1, uas1;

    cout<<"Nama         : ";
    getline(cin, nama);
    cout<<"NPM          : ";
    cin>>npm;
    cout<<"Nilai Absen  : ";
    cin>>nilai_absen;
    cout<<"Nilai Tugas  : ";
    cin>>nilai_tugas;
    cout<<"Nilai UTS    : ";
    cin>>nilai_uts;
    cout<<"Nilai Uas    : ";
    cin>>nilai_uas;

    cout<<endl;

    output(total, absen1, tugas1, uts1, uas1);



    return 0;
}
