#include <iostream>
#include <conio.h>

// 1. lupa menggunakan namespace std
using namespace std;
int main()
{
    // 2. lupa menggunakan titik koma
    int min, max, total;
    cout << "masukkan nilai minimal:";

    cin >> min;

    cout << "masukkan nilai Maximal :";

    // 3. seharus nya menggunakan cin bukan cout untuk meminta input
    cin >> max;

    total = 0;

    for (int i = (min + 1); i < max; i++)
    {
        total += i;
    }
    // 4. hapus tanda << di belakang baris / tambahkan variabel total
    cout << "Total Penjumlahan nilai antara " << min << " dan " << max << " adalah : " << total;
    cout << endl;

    cout << "Bye bye";

    // 5. getch tidak di perlukan di program ini
    // getch();
}