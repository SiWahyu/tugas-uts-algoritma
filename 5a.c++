// 1.lupa memanggil iostream
#include <iostream>
#include <limits.h>
#include <conio.h>

// 2. lupa memanggil namespace std
using namespace std;
int main()
{
    // 3.lupa menginisialisasi tipe data
    // d_int = INT_MAX;
    int d_int = INT_MAX;

    short d_short = SHRT_MAX; // nilai maximum short

    // 4.harus menggunakan long long int karena nilai yang di simpan lebih besar
    long long int d_long = LONG_LONG_MAX; // nilai maximum long

    cout << "Tipe data int:" << endl;

    cout << "lebar Integer int:" << sizeof(int) << " byte" << endl;

    cout << "Nilai Maximum int:" << d_int << endl;

    cout << "Nilai Minimum int: " << INT_MIN << endl;

    cout << "Tipe data short : " << endl;

    cout << "lebar Integer short: " << sizeof d_short << " byte" << endl;

    cout << "Nilai Maximum short:" << d_short << endl;

    cout << "Nilai Minimum short:" << SHRT_MIN << endl;

    cout << "Tipe data long: " << endl;

    cout << "lebar Integer long:" << sizeof d_long << " byte" << endl;

    cout << "Nilai Maximum long:" << d_long << endl;

    cout << "Nilai Minimum long:" << LONG_MIN << endl;

    // 5. getch tidak di perlukan dalam program ini
    // getch();
}