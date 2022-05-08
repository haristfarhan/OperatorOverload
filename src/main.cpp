#include "include/PersegiPanjang.hpp"
#include <iostream>
using namespace std;

void enter()
{
    cout << "Tekan ENTER";
    cin.ignore();
    system("cls||clear");
}

int main()
{
    system("cls||clear");
    float panjang, lebar, tengah_x, tengah_y;
    cout << "Masukkan data Persegi Panjang ke 1 : " << endl;
    cout << "Titik tengah X PP_1   : ";
    cin >> tengah_x;
    cout << "Titik tengah Y PP_1   : ";
    cin >> tengah_y;
    cout << "Panjang Persegi 1   : ";
    cin >> panjang;
    cout << "Lebar Persegi 1     : ";
    cin >> lebar;
    PersegiPanjang PP_1(tengah_x, tengah_y, panjang, lebar);

    cout << "Masukkan data Persegi Panjang ke 2 : " << endl;
    cout << "Titik tengah X PP_2   : ";
    cin >> tengah_x;
    cout << "Titik tengah Y PP_2   : ";
    cin >> tengah_y;
    cout << "Panjang Persegi 2   : ";
    cin >> panjang;
    cout << "Lebar Persegi 2     : ";
    cin >> lebar;
    PersegiPanjang PP_2(tengah_x, tengah_y, panjang, lebar);

    enter();
    PersegiPanjang pp3; // Persegi Panjang pPP_1(5,6,7,8) Persegi Panjang PP_2(8,7,4,4)
    // melihat nilai awal yang sudah diinput
    cout << "Nilai awal Persegi Panjang 1 : " << endl;
    PP_1.print();
    cout << "Nilai awal Persegi Panjang 2 : " << endl;
    PP_2.print();

    enter();
    // operator +
    pp3 = PP_1 + PP_2;
    if (PP_1 == PP_2)
    {
        cout << "Hasil Penjumlahan dari Persegi Panjang 1 dan 2 adalah : " << endl;
        pp3.print();
    }

    enter();
    // operator -
    pp3 = PP_1 - PP_2;
    if (PP_1 == PP_2)
    {
        cout << "Hasil Pengurangan dari Persegi Panjang 1 dan 2 : " << endl;
        pp3.print();
    }

    enter();
    // operator ++
    cout << "Nilai awal Persegi Panjang 1 : " << endl;
    PP_1.print();
    ++ PP_1;
    cout << "Nilai Persegi Panjang 1 setelah operator ++ : " << endl;
    PP_1.print();

    cout << "Nilai awal Persegi Panjang 2 : " << endl;
    PP_2.print();
    ++ PP_2;
    cout << "Nilai Persegi Panjang 2 setelah operator ++ : " << endl;
    PP_2.print();

    enter();
    // operator --
    cout << "Nilai awal Persegi Panjang 1 : " << endl;
    PP_1.print();
    -- PP_1;
    cout << "Nilai Persegi Panjang 1 setelah operator -- : " << endl;
    PP_1.print();

    cout << "Nilai awal Persegi Panjang 2 : " << endl;
    PP_2.print();
    -- PP_2;
    cout << "Nilai Persegi Panjang 2 setelah operator -- : " << endl;
    PP_2.print();

    enter();
    // Program berjalan ke Operator == berfungsi untuk membuktikan bahwa Persegi Panjang 1 dan 2 beririsan
    if (PP_1 == PP_2)
        cout << "Kedua Persegi Panjang beririsan" << endl;
    else
        cout << "Kedua Persegi Panjang saling beririsan" << endl;

    enter();
    cout << "Terima Kasih";
    cin.ignore();
    system("cls||clear");

    return 0;
}