#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    int nim;
    string nama;

public:
    // Constructor dengan parameter
    mahasiswa(int nim, const string &nama);
};

// Definisi constructor
mahasiswa::mahasiswa(int nim, const string &nama)
{
    this->nim = nim;
    this->nama = nama;

    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "NIM  : " << this->nim << endl;
    cout << "Nama : " << this->nama << endl;
}
