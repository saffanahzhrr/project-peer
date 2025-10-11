#include <iostream>
using namespace std;

int main() {

    cout << "\n\n================================================\n";
    cout << "==============Alat converter Waktu==============\n";
    cout << "================================================\n\n";
    
    int tahun;
    int bulan;
    int pekan;
    int hari;
    int angka;
    int jam;
    int menit;
    int detik;
    


    cout << "Masukkan Angka: ";
    cin >> angka;

    if (bulan = angka * 12) {
        cout << angka << " Tahun = " << bulan << " Bulan, ";
    }
    if (pekan = angka * 48) {
        cout << pekan << " Pekan, ";
    }
    if (hari = angka * 365) {
        cout << hari << " Hari\n";
    }
     if (pekan = angka * 4) {
        cout << angka << " Bulan = " << pekan << " Pekan, ";
    }
    if (hari = angka * 30) {
        cout << hari << " Hari\n";
    }
     if (hari = angka * 7) {
        cout << angka << " Pekan = " << hari << " Hari\n\n";
    }
    cout << "Masukkan Angka: ";
    cin >> angka;

    if (jam = angka * 24) {
        cout << angka << " Hari = " << jam << " Jam, ";
    }
    if (menit = angka * 1440) {
        cout << menit << " Menit, ";
    }
    if (detik = angka * 86400) {
        cout << detik << " Detik\n";
    }
     if (menit = angka * 60) {
        cout << angka << " Jam = " << menit << " Menit, ";
    }
     if (detik = angka * 3600) {
        cout << detik << " Detik\n";
    }
     if (detik = angka * 60) {
        cout << angka << " Menit = " << detik << " Detik\n\n";
    }

    cout << "Alat Converter Akan Terus Dikembangkan, Terima Kasih:)\n\n";
    
    return 0;
}