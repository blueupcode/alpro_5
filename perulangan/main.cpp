#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int hasil, angka1, angka2;

  // Mengambil input
  cout << "Masukkan angka pertama: ";
  cin >> angka1;
  cout << "Masukkan angka kedua: ";
  cin >> angka2;

  // Mengasumsikan hasil nya adalah angka pertama
  hasil = angka1;

  // Mengecek adalah hasilnya tidak habis di bagi dengan angka kedua
  while (hasil % angka2 != 0) {
    
    // Hasil ditambah dengan angka pertama
    hasil += angka1;
  }

  // Menampilkan hasil
  cout << "KPK dari " << angka1 << " dan " << angka2 << " adalah " << hasil;
  
  return 0;
}