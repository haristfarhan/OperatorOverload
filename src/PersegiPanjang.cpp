#include <iostream>
#include "include/PersegiPanjang.hpp"

using namespace std;

void PersegiPanjang::print()
{
  float tengah_x, tengah_y, panjang, lebar;
  panjang = this->xmax - this->xmin;
  lebar = this->ymax - this->ymin;

  // pengubahan nilai abs di Panjang dan Lebar agar persegi bisa di masukkan ke nilai yang positif dan membuktikan persegi beririsan atau tidak
  panjang = abs(panjang);
  lebar = abs(lebar);
  cout << "\nTitik tengah X    : "
       << (this->xmax - this->xmin) / 2 + this->xmin;
  cout << "\nTitik tengah Y    : \n"
       << (this->ymax - this->ymin) / 2 + this->ymin;
  cout << "\nPanjang (X)       : \n"
       << panjang;
  cout << "\nLebar   (Y)       : \n"
       << lebar;
  cout << "\nNilai Xmax        : \n"
       << this->xmax;
  cout << "\nNilai Xmin        : \n"
       << this->xmin;
  cout << "\nNilai Ymax        : \n"
       << this->ymax;
  cout << "\nNilai Ymin        : \n"
       << this->ymin;
  cout << "\n\n";
}

PersegiPanjang::PersegiPanjang() {}
// mencari dan menentukan xmax,xmin dan ymax,ymin
PersegiPanjang::PersegiPanjang(float tengah_x, float tengah_y, float panjang, float lebar)
{
  this->xmax = tengah_x + panjang / 2;
  this->xmin = tengah_x - panjang / 2;
  this->ymax = tengah_y + lebar / 2;
  this->ymin = tengah_y - lebar / 2;
}

// mengecek apakah kedua persegi panjang bersifat beririsan atau tidak
bool PersegiPanjang::operator == (PersegiPanjang const &iya) const
{
  if (this->xmax == iya.xmin && this-> xmin < iya.xmax && this-> ymax > iya.ymin && this->ymin < iya.ymax)
    return true;
  else
    return false;
}

// operator + --> menambah luasan persegi panjang dengan menggabungkan kedua luasan persegi panjang
PersegiPanjang PersegiPanjang::operator + (PersegiPanjang const &iya)
{
  PersegiPanjang temp(0, 0, 0, 0);

  if (*this == iya)
  {
    // mengetahui update dari x
    temp.xmax = max(this->xmax, iya.xmax);
    temp.xmin = min(this->xmin, iya.xmin);
    // mengetahui update dari y
    temp.ymax = max(this->ymax, iya.ymax);
    temp.ymin = min(this->ymin, iya.ymin);
  }
  else
    cout << "Persegi Panjang 1 dan 2 tidak beririsan dan pertambahan tidak dapat dilakukan \n";

  return temp;
}

// operator - --> untuk mengambil irisan dari dua persegi panjang
PersegiPanjang PersegiPanjang::operator - (PersegiPanjang const &iya)
{
  PersegiPanjang temp(0, 0, 0, 0);

  if (*this == iya)
  {
    // mengetahui update dari x
    temp.xmax = max(this->xmax, iya.xmax);
    temp.xmin = min(this->xmin, iya.xmin);
    // mengetahui update dari y
    temp.ymax = max(this->ymax, iya.ymax);
    temp.ymin = min(this->ymin, iya.ymin);
  }
  else
    cout << "Persegi Panjang 1 dam 2 Tidak Beririsan dan pengurangan tidak dapat dilakukan \n";
  return temp;
}

// operator ++ --> untuk mengubah luasan persegi panjang dengan mengkali 2x luasan awalnya (diperbesar)
void PersegiPanjang::operator ++()
{
  float panjang = 0, lebar = 0, tengah_x = 0, tengah_y = 0;

  // menentukan persegi panjang 
  panjang = (this->xmax - this->xmin);
  lebar = (this->ymin - this->ymax);
  panjang = abs(panjang);
  lebar = abs(lebar);

  // menetukan Titik Tengah dari persegi panjang
  tengah_x = panjang / 2 + this->xmin;
  tengah_y = lebar / 2 + this->ymin;

  // luas persegi panjang menjadi 2 kali lipat
  panjang *= 2;
  lebar *= 2;

  // menentukkan titik-titik sumbu baru
  this->xmax = tengah_x + panjang / 2;
  this->xmin = tengah_x - panjang / 2;
  this->ymax = tengah_y + lebar / 2;
  this->ymin = tengah_y - lebar / 2;
}

// operator -- --> untuk membuat luasan persegi panjang menjadi 0,5 atau setengah luasan awalnya (diperkecil)
void PersegiPanjang::operator -- ()
{
  float panjang = 0, lebar = 0, tengah_x = 0, tengah_y = 0;

  // menentukan persegi panjang
  panjang = (this->xmax - this->xmin);
  lebar = (this->ymin - this->ymax);
  panjang = abs(panjang);
  lebar = abs(lebar);

  // menetukan Titik Tengah dari persegi panjang
  tengah_x = panjang / 2 + this->xmin;
  tengah_y = lebar / 2 + this->ymin;

  //luas persegi panjang menjadi setengah atau 0,5 kali luasnya
  panjang /= 2;
  lebar /= 2;

  // menentukkan titik-titik sumbu baru
  this->xmax = tengah_x + panjang / 2;
  this->xmin = tengah_x - panjang / 2;
  this->ymax = tengah_y + lebar / 2;
  this->ymin = tengah_y - lebar / 2;
}

void PersegiPanjang::operator++(int) {}
void PersegiPanjang::operator--(int) {}

// mengambil masing masing properti kelas persegi panjang
float PersegiPanjang::operator[](int haha)
{
  switch (haha)
  {
  case 1:
    return this->xmin;
    break;

  case 2:
    return this->xmax;
    break;

  case 3:
    return this->ymin;
    break;

  case 4:
    return this->ymax;
    break;
  }
  return 0;
}