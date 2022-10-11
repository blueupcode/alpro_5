#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  const float phi = 3.14;
  float hasil, r;
  char jenis;

  // Mengambil input
  cout << "K - Keliling" << endl;
  cout << "L - Luas" << endl;
  cout << "-------------------" << endl;
  cout << "Masukkan jari-jari lingkaran: ";
  cin >> r;
  cout << "Masukkan jenis perhitungan: ";
  cin >> jenis;

  // Melakukan perhitungan sesuai dengan jenis perhitungannya
  switch (jenis) {
    case 'K':
      hasil = 2 * phi * r;
      break;
    case 'L':
      hasil = phi * r * r;
      break;
    default:
      cout << "Jenis perhitungan tidak valid";
      return 0;
      break;
  }

  // Menampilkan hasil
  cout << "Hasil perhitungan nya adalah " << hasil;  

  return 0;
}