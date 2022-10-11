#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel global
  int jumlahSemester;
  int totalSKSKeseluruhan = 0;
  int totalMatkulKeseluruhan = 0;
  float totalPoinKeseluruhan = 0.0;
  float IPK;

  // Memasukkan jumlah semestar
  cout << "Masukkan jumlah semester: ";
  cin >> jumlahSemester;

  // Melakukan perulangan berdasarkan jumlah semestar
  for (int noSemester = 1; noSemester <= jumlahSemester; noSemester++) {
   
    // Deklarasi variabel per semester
    int jumlahSKS;
    int totalSKS = 0;
    int totalMatKul = 0;
    float totalPoin = 0.0;
    float IP;
    char tambahMatKul;
    
    // Menampilkan keterangan nomor semester
    cout << endl << "====================================" << endl;
    cout << "Semester ke-" << noSemester << endl;

    // Melakukan perulangan untuk memasukkan data setiap mata kuliah
    do {
      string namaMatKul;
      char predikat;
      float poin;

      // Memasukkan data untuk setiap mata kuliah
      cout << "====================================" << endl;
      cout << "Masukkan nama mata kuliah      : ";
      cin >> namaMatKul;
      cout << "Masukkan jumlah SKS            : ";
      cin >> jumlahSKS;
      cout << "Masukkan nilai (A, B, C, D, E) : ";
      cin >> predikat;

      // Mengkonfirmasi apakah ingin memasukkan data mata kuliah lain
      cout << "-----------------------------------" << endl;
      cout << "Apakah ingin menambahkan mata kuliah lain (y/n): ";
      cin >> tambahMatKul;

      // Menentukan jumlah poin berdasarkan predikat
      switch (predikat) {
        case 'A': poin = 4.0; break;
        case 'B': poin = 3.0; break;
        case 'C': poin = 2.0; break;
        case 'D': poin = 1.0; break;
        case 'E': poin = 0.0; break;
      }

      // Melakukan kalkulasi data per mata kuliah
      totalSKS += jumlahSKS;
      totalPoin += jumlahSKS * poin;
      totalMatKul++;

    // Mengecek apakah ingin melanjutkan perulangan
    } while (tambahMatKul == 'y');
    
    // Melakukan kalkulasi data per semester
    IP = totalPoin / totalSKS;
    totalPoinKeseluruhan += totalPoin;
    totalSKSKeseluruhan += totalSKS;
    totalMatkulKeseluruhan += totalMatKul; 
    
    // Melakukan data hasil kalkulasi per semester
    cout << "====================================" << endl;
    cout << "Data Semester ke-" << noSemester << endl;
    cout << "-----------------------------------" << endl;
    cout << "Nilai IP           : " << IP << endl;
    cout << "Total SKS          : " << totalSKS << endl;
    cout << "Total Poin         : " << totalPoin << endl;
    cout << "Total Mata Kuliah  : " << totalMatKul << endl;
    cout << "====================================" << endl;
  }

  // Melakukan kalkulasi IPK
  IPK = totalPoinKeseluruhan / totalSKSKeseluruhan;

  // Melakukan keseluruhan data
  cout << "====================================" << endl;
  cout << "Data Keseluruhan" << endl;
  cout << "-----------------------------------" << endl;
  cout << "Nilai IPK          : " << IPK << endl;
  cout << "Total SKS          : " << totalSKSKeseluruhan << endl;
  cout << "Total Poin         : " << totalPoinKeseluruhan << endl;
  cout << "Total Mata Kuliah  : " << totalMatkulKeseluruhan << endl;
  cout << "====================================" << endl;

  return 0;
}