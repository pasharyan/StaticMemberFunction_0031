#include <iostream>
#include <string>
using namespace std;

class buku
{

    string judul;

public:
    string setget(const string &judul)
    {
        this->judul = judul;
        return this->judul;
    }
};

int main()
{
    buku bukunya;
    cout << bukunya.setget("Matematika");
    return 0;
}