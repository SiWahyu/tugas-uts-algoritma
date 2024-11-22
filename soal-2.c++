#include <iostream>
int main()
{
    // Membuat sebuah variabel kosong untuk menampung nama,kota
    std::string nama, kota;
    // Meminta input nama
    std::cout << "Hallo siapa namamu? ";
    // Memasukan nama yang di input ke variabel nama
    std::getline(std::cin, nama);

    // Meminta input kota
    std::cout << "Di kota apa sekarang kamu tinggal? ";
    // Memasukan kota yang di input ke variabel kota
    std::getline(std::cin, kota);

    // menampilkan hasil nya
    std::cout << "Senang berteman denganmu, " << nama << " di " << kota;
    return 0;
}