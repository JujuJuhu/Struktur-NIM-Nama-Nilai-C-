// Program NIM, Nama dan Nilai menggunakan Struktur

#include <iostream>
#include <string>

// Mendefinisikan struktur data Mahasiswa
struct Mahasiswa {
    int NIM;
    std::string NAMA;
    double Nilai;
};

int main() {
    // Mendeklarasikan variabel bertipe Mahasiswa
    Mahasiswa mahasiswa1;

    // Mengisi data Mahasiswa
    mahasiswa1.NIM = 123456789;
    mahasiswa1.NAMA = "jovita Kusuma";
    mahasiswa1.Nilai = 95.5;

    // Menampilkan data Mahasiswa
    std::cout << "NIM   : " << mahasiswa1.NIM << std::endl;
    std::cout << "NAMA  : " << mahasiswa1.NAMA << std::endl;
    std::cout << "Nilai : " << mahasiswa1.Nilai << std::endl;

    return 0;
}
