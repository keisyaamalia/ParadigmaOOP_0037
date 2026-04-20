#include <iostream>
using namespace std;
class Barang
{
public :
string nama;
    int jumlah;
    string kategori;
    string tanggalproduksi;

    void spesifikasi()
 {
cout << "nama : " << nama << endl;
cout << "Jumlah : " << jumlah << endl;
cout << "kategori : " << kategori << endl;
cout << "tanggalproduksi : " << tanggalproduksi << endl;
 }
};
int main()
{
    Barang elektronik;
    elektronik.nama = "televisi";
    elektronik.jumlah = 8; 
    elektronik.kategori = "elektronik";
    elektronik.tanggalproduksi = "2026/20/04";

    elektronik.spesifikasi();

    Barang nonelektronik;
    nonelektronik.nama = "lemari";
    nonelektronik.jumlah = 7; 
    nonelektronik.kategori = "nonelektronik";
    nonelektronik.tanggalproduksi = "2026/20/04";

    nonelektronik.spesifikasi();

}