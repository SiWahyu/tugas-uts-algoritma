#include <iostream>
using namespace std;

int main()
{
    cout << "=== Restoran Wahyu ===" << endl;
    cout << "Daftar Menu:" << endl;
    cout << "1. Nasi Goreng Spesial" << endl;
    cout << "2. Mie Ayam Komplit" << endl;
    cout << "3. Ayam Geprek" << endl;

    // Meminta input pilihan menu
    int pilihan;
    cout << "\nMasukkan nomor menu pilihan Anda: ";
    cin >> pilihan;

    // Menampilkan harga berdasarkan pilihan
    if (pilihan == 1)
    {
        cout << "Harga Nasi Goreng Spesial adalah Rp 25.000" << endl;
    }
    else if (pilihan == 2)
    {
        cout << "Harga Mie Ayam Komplit adalah Rp 20.000" << endl;
    }
    else if (pilihan == 3)
    {
        cout << "Harga Ayam Geprek adalah Rp 22.000" << endl;
    }
    else
    {
        cout << "Menu tidak ditemukan. Silakan pilih menu yang tersedia!" << endl;
    }

    return 0;
}
