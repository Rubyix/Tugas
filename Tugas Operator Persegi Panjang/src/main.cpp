#include <iostream>
#include <string>
#include "include/PersegiPanjang.hpp"
using namespace std;

void EngineStart();
void clear();
int optionthis();

int main(){
    while(1){
        EngineStart();
        float panjang, lebar, titiktengah_x, titiktengah_y;
         string option_str;
        int option_int;
         cout << ">>>INPUTKAN BESAR PERSEGI PANJANG YANG DIINGINKAN<<<" <<  endl << endl;
         cout << " > Persegi Panjang 1" <<  endl;
             cout << "Panjang        : ";  cin >> panjang;      
             cout << "Lebar          : ";  cin >> lebar;       
             cout << "Titik Tengah x : ";  cin >> titiktengah_x;  
             cout << "Titik Tengah y : ";  cin >> titiktengah_y;  
             cout <<  endl;
            PersegiPanjang obj1(titiktengah_x, titiktengah_y, panjang, lebar);

         cout << " > Persegi Panjang 2" <<  endl;
             cout << "Panjang        : ";  cin >> panjang;      
             cout << "Lebar          : ";  cin >> lebar;       
             cout << "Titik Tengah x : ";  cin >> titiktengah_x;  
             cout << "Titik Tengah y : ";  cin >> titiktengah_y;  
            PersegiPanjang obj2(titiktengah_x, titiktengah_y, panjang, lebar);
        PersegiPanjang obj3(0,0,0,0);
        clear();

         cout << ">>>DATA SEBELUM DIOLAH<<<" <<  endl << endl;
         cout << "Persegi Panjang 1" <<  endl; 
            obj1.output();
             cout <<  endl;
         cout << "Persegi Panjang 2" <<  endl;
            obj2.output();
             cout <<  endl;
         cout << "Apakah Data Sudah Benar ? (y/n)\n ";
             cin >> option_str;
                if(option_str == "n" || option_str == "N"){
                    main();
                }
        clear();
        
        while(1){
            clear();
             cout <<  endl;
            option_int = optionthis();
            switch (option_int){
                case 1:
                    {
                         cout << " > OPERATOR +" <<  endl;
                        obj3 = obj1 + obj2;
                        if (obj1==obj2){
                            obj3.output();
                        }
                    }
                    break;
                case 2:
                    {
                         cout <<  endl;
                         cout << " > OPERATOR -" <<  endl;
                        obj3 = obj1 - obj2;
                        if (obj1==obj2){
                            obj3.output();
                        }
                    }
                    break;
                case 3:
                    {
                         cout <<  endl;
                         cout << " > OPERATOR ++ PERSEGI PANJANG 1" <<  endl;
                        ++obj1;
                        obj1.output();
                        --obj1;
                    }
                    break;
                case 4:
                    {
                         cout <<  endl;
                         cout << " > OPERATOR -- PERSEGI PANJANG 1" <<  endl;
                        --obj1;
                        obj1.output();
                        ++obj1;
                    }
                    break;
                case 5:
                    {
                         cout <<  endl;
                         cout << " > OPERATOR ++ PERSEGI PANJANG 2" <<  endl;
                        ++obj2;
                        obj2.output();
                        --obj2;
                    }
                    break;
                case 6:
                    {
                         cout <<  endl;
                         cout << " > OPERATOR -- PERSEGI PANJANG 2" <<  endl;
                        --obj2;
                        obj2.output();
                        ++obj2;
                    }
                    break;
                case 7:
                    {
                         cout << " > OPERATOR []" <<  endl;
                         cout << "Nilai X Maks Persegi Panjang 1 : " << obj1[2] <<  endl;
                         cout << "Nilai X Maks Persegi Panjang 2 : " << obj2[2] <<  endl;
                        if (obj1[2] > obj2[2]){
                             cout << "X Maks Persegi Panjang 1 lebih besar dari X Maks Persegi Panjang 2";
                        }
                        else if(obj2[2] > obj1[2]){
                             cout << "X Maks Persegi Panjang 2 lebih besar dari X Maks Persegi Panjang 1";
                        }
                        else{
                             cout << "Nilai kedua X Maks sama besar";
                        }
                    }
                    break;
                case 8:
                    {
                         cout <<  endl <<  endl;
                         cout << " > OPERATOR ==" <<  endl;
                        if (obj1==obj2){
                             cout << "Persegi panjang beririsan" <<  endl;
                        }else{
                             cout << "Persegi panjang tidak beririsan" <<  endl;
                        }
                        return 0;
                    }
                    break;
            }
             cout <<  endl;
             cout << "Ingin mencoba operator lain ? (y/n)\n";
             cin >> option_str;
            if(option_str == "N" || option_str == "n"){
                break;
            }
        }
    clear();
     cout <<  endl;
     cout << "Ingin mengubah nilai persegi panjang ? (y/n)\n";
         cin >> option_str;
        if(option_str == "N" || option_str == "n"){
            break;
        }
    }
}

void EngineStart(){
     cout <<  endl;
     cout << "<<<<<<<<<<TUGAS PROLAN : OPERATOR PERSEGI PANJANG>>>>>>>>>>" << endl;
     cout << "Nama        : Octavianus Immanuel Christpurwanto" << endl;
     cout << "NRP         : 5024211014" << endl;
     cout << "Departemen  : Teknik Komputer" << endl;
     cout << "Angkatan    : 2021" << endl;
     cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" <<  endl;
     cout << "Tekan 'Enter' Untuk Memulai Program ";
     cin.get();
    clear();
}
void clear(){
    system("CLS");
}
int optionthis(){
    int option_fungsi;
     cout << ">> Pilih Operasi Yang Diinginkan : \n    1. Operator '+' \n    2. Operator '-' \n    3. Operator '++' Persegi Panjang 1 \n    4. Operator '--' Persegi Panjang 1 \n    5. Operator '++' Persegi Panjang 2 \n    6. Operator '--' Persegi Panjang 2 \n    7. Operator '[]'  \n    8. Operator '==' \n >> OPERASI KE : ";
     cin >> option_fungsi;
    return option_fungsi;
return 1;

}