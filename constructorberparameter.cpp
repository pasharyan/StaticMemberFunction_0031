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
