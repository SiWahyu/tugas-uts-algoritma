#include <iostream>
using namespace std;

int main()
{
    cout << "=== Quiz SiWahyu ===" << endl;
    cout << "Siapakah nama yang benar dari pembuat kuis ini?" << endl;

    // Opsi jawaban
    cout << "1. Wahu" << endl;
    cout << "2. SiWahyu" << endl;
    cout << "3. Malas" << endl;

    // Input jawaban dari pengguna
    int pilihan;
    cout << "Masukkan nomor pilihanmu: ";
    cin >> pilihan;

    // Periksa jawaban
    if (pilihan == 2)
    {
        cout << "Selamat! Jawabanmu benar, nama pembuat kuis ini adalah Wahyu. 🎉" << endl;

        // Pertanyaan kedua
        cout << "\n2. Apa warna favorit Wahyu?" << endl;
        cout << "1. Merah" << endl;
        cout << "2. Biru" << endl;
        cout << "3. Kuning" << endl;

        int pilihan2;
        cout << "Masukkan nomor pilihanmu: ";
        cin >> pilihan2;

        if (pilihan2 == 3)
        {
            cout << "Benar! Wahyu suka warna kuning. ⭐" << endl;
        }
        else
        {
            cout << "Salah, warna favorit Wahyu adalah kuning. 😂" << endl;
        }
    }
    else
    {
        cout << "Maaf, jawabanmu salah. Nama yang benar adalah Wahyu. 😢" << endl;
    }

    return 0;
}
