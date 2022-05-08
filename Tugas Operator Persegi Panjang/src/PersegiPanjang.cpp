#include <iostream>
#include <cmath>
#include "include/PersegiPanjang.hpp"
using namespace std;

void PersegiPanjang::output(){
    float panjang = this->x_maks - this->x_min; panjang = abs(panjang);
    float lebar   = this->y_maks - this->y_min; lebar   = abs (lebar);
     cout << "Titik Tengah x   : " << (this->x_maks - this->x_min)/2 + this->x_min;  cout <<  endl;
     cout << "Titik Tengah y   : " << (this->y_maks - this->y_min)/2 + this->y_min;  cout <<  endl;
     cout << "Panjang          : " << panjang;  cout <<  endl;
     cout << "Lebar            : " << lebar;  cout <<  endl;
     cout << "Nilai x_min      : " << this->x_min;  cout <<  endl;
     cout << "Nilai x_max      : " << this->x_maks;  cout <<  endl;
     cout << "Nilai y_min      : " << this->y_min;  cout <<  endl;
     cout << "Nilai y_maks     : " << this->y_maks;  cout <<  endl;
}


PersegiPanjang::PersegiPanjang(float titiktengah_x, float titiktengah_y, float panjang, float lebar){
    this->x_min = titiktengah_x - (panjang/2);
    this->y_min = titiktengah_y - (lebar/2);
    this->x_maks = titiktengah_x + (panjang/2);
    this->y_maks = titiktengah_y + (lebar/2);
}

bool PersegiPanjang::operator==(PersegiPanjang const &new_var)const{
    if (this->x_maks > new_var.x_min && this->x_min < new_var.x_maks && this->y_maks > new_var.y_min && this->y_min < new_var.y_maks){
        return true;
    }else{
        return false;
    }
}


PersegiPanjang PersegiPanjang::operator+(PersegiPanjang const &new_var){
    PersegiPanjang temp(0,0,0,0);
    if (*this == new_var){
        temp.x_min =  min(this-> x_min,new_var.x_min);
        temp.y_min =  min(this-> y_min,new_var.y_min);
        temp.x_maks =  max(this-> x_maks,new_var.x_maks);
        temp.y_maks =  max(this-> y_maks,new_var.y_maks);
    }else{
         cout << "Kedua Persegi Panjang Tidak Beririsan" <<  endl;
    }
    return temp;
}


PersegiPanjang PersegiPanjang::operator-(PersegiPanjang const &new_var){
    PersegiPanjang temp(0,0,0,0);
    if (*this == new_var){
        temp.x_min =  max(this-> x_min,new_var.x_min);
        temp.y_min =  max(this-> y_min,new_var.y_min);
        temp.x_maks =  min(this-> x_maks,new_var.x_maks);
        temp.y_maks =  min(this-> y_maks,new_var.y_maks);
    }else{
         cout << "Kedua Persegi Panjang Tidak Beririsan" <<  endl;
    }
    return temp;
}

void PersegiPanjang::operator++(){
    float panjang = 0, lebar = 0, titiktengah_x = 0, titiktengah_y = 0;
    panjang = this->x_maks - this->x_min; panjang = abs(panjang);
    lebar = this->y_maks - this->y_min; lebar = abs(lebar);
    titiktengah_x = this->x_min + panjang/2;
    titiktengah_y = this->y_min + lebar/2;

    panjang = panjang * 2;
    lebar = lebar * 2;

    this->x_min = titiktengah_x - panjang/2;
    this->y_min = titiktengah_y - lebar/2;
    this->x_maks = titiktengah_x + panjang/2;
    this->y_maks = titiktengah_y + lebar/2;
}

void PersegiPanjang::operator--(){
    float panjang = 0, lebar = 0, titiktengah_x = 0, titiktengah_y = 0;
    panjang = this->x_maks - this->x_min; panjang = abs(panjang);
    lebar = this->y_maks - this->y_min; lebar = abs(lebar);
    titiktengah_x = this->x_min + panjang/2;
    titiktengah_y = this->y_min + lebar/2;

    panjang = panjang / 2;
    lebar = lebar / 2;

    this->x_min = titiktengah_x - panjang/2;
    this->y_min = titiktengah_y - lebar/2;
    this->x_maks = titiktengah_x + panjang/2;
    this->y_maks = titiktengah_y + lebar/2;
}

float PersegiPanjang::operator[](int pilihan){
    switch (pilihan){
    case 1:
        return this->x_min;
        break;
    case 2:
        return this->x_maks;
        break;
    case 3:
        return this->y_min;
        break;
    case 4:
        return this->y_maks;
        break;
    }
    return 0;
}