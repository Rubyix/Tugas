#include <iostream>
#include <vector>
#include <stdlib.h>
#include <ctype.h>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;
    int idMhs = 0;
    int idDosen = 0;
    int idTendik = 0;

	while(1) {
		cout << "Selamat datang di ITS (Institut Teknologi Sepuluh Nopember)" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " Mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " TenDik" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:{
                idMhs++;
                string id, nama, nrp, departemen, matkul;
                int dd, mm, yy, tahunmasuk;
                id = idMhs;
                cout << "Nama Mahasiswa : ";
                cin.ignore();
                getline(cin, nama);
                cout << "Tanggal Lahir Mahasiswa : ";
                cin >> dd;
                cout << "Bulan Lahir Mahasiswa : ";
                cin >> mm;
                cout << "Tahun Lahir Mahasiswa : ";
                cin >> yy;
                cout << "NRP Mahasiswa : ";
                cin >> nrp;
                cout << "Departemen : ";
                cin.ignore();
                getline(cin, departemen);
                cout << "Tahun Masuk Mahasiswa : ";
                cin >> tahunmasuk;
                cout << "Mata Kuliah Diambil : ";
                cin.ignore();
                getline(cin, matkul);
                mahasiswa inputMhs = mahasiswa(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk, matkul);
                recMhs.push_back(inputMhs);
            }
				break;
			case 2: {
				idDosen++;
                string id, nama, npp, departemen,pendidikan;
                int dd, mm, yy;
                id = idDosen;
                cout << "Nama Dosen : ";
                cin.ignore();
                getline(cin, nama);
                cout << "Tanggal Lahir Dosen : ";
                cin >> dd;
                cout << "Bulan Lahir Dosen : ";
                cin >> mm;
                cout << "Tahun Lahir Dosen : ";
                cin >> yy;
                cout << "NPP Dosen : ";
                cin >> npp;
                cout << "Departemen : ";
                cin.ignore();
                getline(cin, departemen);
                cout << "Pendidikan Dosen : ";
                cin.ignore();
                getline(cin, pendidikan);
                dosen inputDosen = dosen(id, nama, dd, mm, yy, npp, departemen, pendidikan);
                recDosen.push_back(inputDosen);
			}
				break;
			case 3:{
				idTendik++;
                string id, nama, npp, unit;
                int dd, mm, yy;
                id = idTendik;
                cout << "Nama TenDik : ";
                cin.ignore();
                getline(cin, nama);
                cout << "Tanggal Lahir TenDik : ";
                cin >> dd;
                cout << "Bulan Lahir TenDik : ";
                cin >> mm;
                cout << "Tahun Lahir TenDik : ";
                cin >> yy;
                cout << "NPP TenDik : ";
                cin >> npp;
                cout << "Unit TenDik : ";
                cin.ignore();
                getline(cin, unit);
                tendik inputTendik = tendik(id, nama, dd, mm, yy, npp, unit);
                recTendik.push_back(inputTendik);
			}

				break;
			case 4:{
                for(int i = 0; i < idMhs; i++){
                    cout << "Nama Mahasiswa             :" << recMhs[i].getNama() << endl;
					cout << "Tanggal/Bulan/Tahun Lahir  :" << recMhs[i].getTglLahir() <<  "/"<<recMhs[i].getBulanLahir()<< "/" << recMhs[i].getTahunLahir() <<endl;
					cout << "NRP                        :" << recMhs[i].getNRP() << endl;
					cout << "Departemen                 :" << recMhs[i].getDepartemen() << endl;
					cout << "Tahun Masuk                :" << recMhs[i].getTahunMasuk() << endl;
                    cout << "Mata Kuliah Diambil        :" << recMhs[i].getMatkul() << endl << endl;
                }
            }
				break;
			case 5:{
				  for(int i = 0; i < idDosen; i++){
                    cout << "Nama Dosen                 :" << recDosen[i].getNama() << endl;
                    cout << "Tanggal/Bulan/Tahun Lahir  :" << recDosen[i].getTglLahir() <<  "/"<<recDosen[i].getBulanLahir()<< "/" << recDosen[i].getTahunLahir() <<endl;
                    cout << "NPP                        :" << recDosen[i].getNPP() << endl;
                    cout << "Departemen                 :" << recDosen[i].getDepartemen() << endl;
                    cout << "Pendidikan                 :" << recDosen[i].getPendidikan() << endl << endl;
                }
			}
				break;
			case 6:{
				  for(int i = 0; i < idTendik; i++){
                    cout << "Nama Tendik                :" << recTendik[i].getNama() << endl;
					cout << "Tanggal/Bulan/Tahun Lahir  :" << recTendik[i].getTglLahir() <<  "/"<<recTendik[i].getBulanLahir()<< "/" << recTendik[i].getTahunLahir() <<endl;
					cout << "NPP                        :" << recTendik[i].getNPP() << endl;
					cout << "Unit                       :" << recTendik[i].getUnit() << endl << endl;
                }
			}
				break;
		}
       
	}
}
