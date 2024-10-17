#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Masukan nilai array: ";
    cin >> n;

    int arr[n];

    cout << "Masukan " << n << " angka:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Nilai tertinggi dalam array adalah " << max << endl;


    char pilihan;
    do {
        int cari;
        cout << "Masukkan angka yang ingin diperiksa: ";
        cin >> cari;

        bool found = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == cari) {
                cout << "Angka " << cari << " ditemukan di indeks ke-" << i << endl;
                found = true;
            }
        }

        if (!found) {
            cout << "Angka " << cari << " tidak ditemukan dalam array." << endl;
        }

        cout << "Ingin mencari angka lain? (y/n): ";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');

    return 0;
}
