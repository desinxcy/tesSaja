#include <stdio.h>

int main() {
  int a = 10;
  int b = 20;
  int hasil;

  printf ("hasil dari penjumlahan a dan b adalah %d\n", a + b);
  hasil = a + b;
  printf ("hasil dari variable hasil : %d\n", hasil);

  // Menghitung Luas Segitiga 
  int tinggi;
  int alas;
  float luas;

  printf ("masukkan nilai tinggi : ");
  scanf ("%d", &tinggi);
  
  printf ("masukkan nilai alas : ");
  scanf ("%d", &alas);

  luas = 1.0 / 2 * alas * tinggi;

  printf ("\nnilai alas adalah : %d\n", alas);
  printf ("nilai tinggi adalah : %d\n", tinggi);
  printf ("Luas segitiga adalah %.2f\n", luas);

  return 0;
}
