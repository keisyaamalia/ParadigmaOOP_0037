#include <iostream>
using namespace std;
class Mahasiswa
{
    public :
    int nim;
    string nama;
    float nilai;
 //batas class
void printData()
 {
cout << "Nim : " << nim << endl;
cout << "Nama : " << nama << endl;
cout << "Nlai : " << nilai << endl;
 }
};
int main()
{
Mahasiswa mhs;
    mhs.nim = 2022;
    mhs.nama = "Keisya"; 
    mhs.nilai = 90.5;

    mhs.printData();
}