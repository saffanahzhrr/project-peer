#include <iostream>
using namespace std;

bool isPrima(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    int batas;
    cout << "Masukkan batas angka: ";
    cin >> batas;

    cout << "Bilangan prima dari 1 sampai " << batas << " adalah:\n";

    for (int i = 1; i <= batas; i++) {
        if (isPrima(i)) {
            cout << i << " ";
        }
    }
    cout << "\n";
    
    return 0;
}
