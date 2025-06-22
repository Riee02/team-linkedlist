include <iostream>
#include <string>
using namespace std;

struct toko{
    int id;
    string nama;
    string kategori;
    string harga;
    int stok;
    toko* next;
};

int main()