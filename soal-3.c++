#include <iostream>
using namespace std;
int main()
{

    // Menyimpan input dari pengguna
    std::string nama;

    // menyimpan input dari pengguna
    int number;

    // menyimpan hasil faktorial
    int result = 1;

    // Meminta input nama
    std::cout << "Hallo siapa namamu? ";
    // Memasukan nama yang di input ke variabel nama
    std::getline(std::cin, nama);

    // Meminta input nilai yang akan di faktorialkan
    cout << "Hallo " << nama << " masukan nilai bulat non-negatif: ";
    cin >> number;

    // Memeriksa apakah input tidak kurang dari atau sama dengan 1
    if (number <= 1)
    {
        // jika nilai kurang dari atau sama dengan 1 akan di kembalikan nilai 1
        cout << 1;
    }
    else
    {
        // Menghitung faktorial
        for (int i = number; i >= 1; --i)
        {
            result *= i;
        }
        cout << "Faktorial dari " << number << " adalah " << result << "." << endl;
    }

    return 0;
}
