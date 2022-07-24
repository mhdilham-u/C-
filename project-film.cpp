#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#define N 20

using namespace std;
int main(int argc, char * argv[]) {
  char nama[N][20];
  char judul[N][20];
  char kode[N];
  char lama[N][2];
  float ls[N];
  char lagi;
  int i = 0, jml = 0;
  char jenis[10], bonus[10];
  float harga, total, totsel = 0;
  //clrscr();
  
  
  while (1) {
    //clrscr();
    cout << "PROGRAM PENYEWAAN FILM";
    cout << "\n Nama Penyewa : ";
    gets(nama[i]);
    cout << " Judul Film : ";
    gets(judul[i]);
    cout << " Kode Film (A, D, K) : ";
    kode[i] = getche();
    cout << "\n Lama Sewa : ";
    gets(lama[i]);
    ls[i] = atof(lama[i]);
    jml++;
    i++;
    cout << "Ada Data Lagi [Y/T] : ";
    lagi = getche();
    if (lagi == 't' || lagi == 'T')
      break;
    cout << endl;
  }
  
  
  //clrscr();
  cout << "DAFTAR PENYEWA FILM";
  cout << endl;
  cout << "==========================================================" << endl;
  cout << "Nama \t Judul \t Jenis \tHarga \t Lama \t Total \tBonus" << endl;
  cout << "Penyewa \t Film \t Film \t Sewa \t Sewa \t Biaya " << endl;
  cout << "==========================================================" << endl;
  for (i = 0; i < jml; ++i) {
    if (kode[i] == 'A' || kode[i] == 'a') {
      strcpy(jenis, "Action");
      harga = 5000;
    } else if (kode[i] == 'D' || kode[i] == 'd') {
      strcpy(jenis, "Drama");
      harga = 4000;
    } else {
      strcpy(jenis, "Komedi");
      harga = 3000;
    }
    
	if (ls[i] >= 5)
      strcpy(bonus, "Gelas");
    else if (ls[i] >= 3)
      strcpy(bonus, "Sticker");
    else
      strcpy(bonus, "Tdk Ada");
    total = ls[i] * harga;
    totsel = totsel + total;
    cout << nama[i] << "\t";
    cout << judul[i] << "\t";
    cout << jenis << "\t";
    cout << harga << "\t";
    cout << lama[i] << "\t";
    cout << total << "\t";
    cout << bonus;
    cout << endl;
  }
  
  
  cout << "===========================================================" << endl;
  cout << "Total Seluruhnya : " << totsel;
  getch();
}
