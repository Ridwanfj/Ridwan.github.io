#include <iostream>

using namespace std;

int main()
{
    int detik;
    int menit;
    int jam;
    cout<<"masukkan detik : ";
    cin>>detik;
    jam = detik/3600;
    detik = detik%3600;//modulus untuk sisa konversi detik ke jam
    menit = detik/60  ;//sisa detik dikonversi ke menit
    detik = detik-60*menit; //sisa detik dikurangi konversi dari sisa detik ke menit
    cout <<jam<<" jam "<<menit<<" menit "<<detik<<" detik "<< endl;
    return 0;
}
