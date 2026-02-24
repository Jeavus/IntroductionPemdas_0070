#include<iostream>
using namespace std;

int main() {
    // p = panjang, l = lebar, luas = luas persegi panjang
    float p, l, luas;

    // langkah 1: meminta input panjang dan lebar dari pengguna
    cout << "Masukkan panjang: ";
    cin >> p;
    // langkah 2: meminta input lebar dari pengguna
    cout << "Masukkan lebar: ";
    cin >> l;
    // langkah 3: menghitung luas persegi panjang
    luas = p * l;
    // langkah 4: menampilkan hasil luas persegi panjang
    cout << "Luas persegi panjang: " << luas << endl;
}