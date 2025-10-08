#include <iostream>
using namespace std;

int main() {
    
    int angka1;
    int angka2;
    int angka5;

    cout << "================================================\n";
    cout << "==============Alat converter Waktu==============\n";
    cout << "================================================\n\n";

    cout << "Masukkan Jumlah Tahun: ";
    cin >> angka1;
    cout << angka1 << " Tahun = " << angka1 * 12 << " Bulan, " << angka1 * 4 << " Pekan, " << angka1 * 7 << " Hari\n\n";

    cout << "Masukkan Jumlah Bulan: ";
    cin >> angka2;
    cout << angka2 << " Bulan = " << angka2 * 4 << " Pekan\n";
    cout << angka2 << " Pekan = " << angka2 * 7 << " Hari\n\n";

    cout << "Masukkan Jumlah Jam: ";
    cin >> angka5;
    cout << angka5 << " Jam = " << angka5 * 60 << " Menit\n";
    cout << angka5 << " Menit = " << angka5 * 60 << " Detik\n\n";

    cout << "Alat Converter Akan Terus Dikembangkan, Terima Kasih:)\n\n";

    return 0;
}