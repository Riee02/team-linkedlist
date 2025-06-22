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

toko* listBarang(int id, string nama, string kategori, string harga, int stok) {
    toko* barangBaru=new toko;
    barangBaru->id=id;
    barangBaru->nama=nama;
    barangBaru->kategori=kategori;
    barangBaru->harga=harga;
    barangBaru->stok=stok;
    barangBaru->next=nullptr;
    return barangBaru;
}

int main()