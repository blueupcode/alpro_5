# Menghitung Nilai IP dan IPK (Percabangan dan Perulangan)

Buatlah program untuk menghitung IP dan IPK. IPK atau Indeks Prestasi Kumulatif adalah rata-rata nilai kasar berdasarkan nilai huruf yang didapatkan setiap semester. Setiap nilai huruf mempunyai nilai numerik dari 0-4, seperti di bawah:

| Nilai | Bobot |
|-------|-------|
| A     | 4.0   |
| B     | 3.0   |
| C     | 2.0   |
| D     | 1.0   |
| E     | 0.0   |

Kemudian terdapat juga istilah SKS atau Satuan Kredit Semester merupakan beban studi pada setiap mata kuliah yang direpresentasikan dalam bentuk angka. Kita dapat menghitung poin yang didapatkan dari setiap mata kuliah dengan mengalikan bobot dari nilai huruf dengan jumlah SKS.

Kita dapat menghitung nilai IP dengan rumus ini (Total(SKS x Poin)) / (Total SKS). IP hanya menghitung nilai untuk 1 semester, sedangkan nilai IPK menghitung nilai keseluruhan untuk semua semester. Rumus IPK dapat dinotasikan dengan IPK = (Total Kumulatif (SKS x Poin)) / (Total Kumulatif SKS). Berikut contohnya:

**Semester ke-1**

<table>
  <thead>
    <tr>
      <th>Mata Kuliah</th>
      <th>Nilai</th>
      <th>SKS</th>
      <th>Poin</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Matematika</td>
      <td>A = 4.0</td>
      <td>3</td>
      <td>12</td>
    </tr>
    <tr>
      <td>Fisika</td>
      <td>C = 2.0</td>
      <td>2</td>
      <td>4</td>
    </tr>
    <tr>
      <td>Kimia</td>
      <td>A = 4.0</td>
      <td>3</td>
      <td>12</td>
    </tr>
  </tbody>
  <tfoot>
    <tr>
      <td colspan="2">Total</td>
      <td>8</td>
      <td>28</td>
    </tr>
  </tfoot>
</table>

IP = Total Poin / Jumlah SKS = 28 / 8 = 3.5

**Semester ke-2**

<table>
  <thead>
    <tr>
      <th>Mata Kuliah</th>
      <th>Nilai</th>
      <th>SKS</th>
      <th>Poin</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Matematika</td>
      <td>B = 3.0</td>
      <td>3</td>
      <td>9</td>
    </tr>
    <tr>
      <td>Fisika</td>
      <td>D = 1.0</td>
      <td>2</td>
      <td>2</td>
    </tr>
  </tbody>
  <tfoot>
    <tr>
      <td colspan="2">Total</td>
      <td>5</td>
      <td>11</td>
    </tr>
  </tfoot>
</table>

IP = (Total Poin) / (Jumlah SKS) = 11 / 5 = 2.2

**Data Keseluruhan**

Total SKS Kumulatif = 13

Total Poin Kumulatif = 39

IPK = (Total Poin Kumulatif) / (Total SKS Kumulatif) = 39 / 13 = 3
