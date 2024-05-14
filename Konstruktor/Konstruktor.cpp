// Konstruktor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	int nim;
	string nama;
public:
	mahasiswa() {
		nim = 0;
		nama = "";

	}
	mahasiswa(int inim) {
		nim = inim;
	}

	mahasiswa(string);
	mahasiswa(int iNim, string iNama);
	void cetak();



};

mahasiswa::mahasiswa(string iNama) {
	nim = 0;
	nama = iNama;
}

mahasiswa::mahasiswa(int inim, string iNama) {
	nim = inim;
	nama = iNama;
}

void mahasiswa::cetak() {
	cout << endl << "Nim = " << nim << endl;
	cout << "Nama = " << nama << endl;
}

int main() {
	mahasiswa mhs1;
	mahasiswa mhs2(20);
	mahasiswa mhs3("Andi Janu");
	mahasiswa mhs4(30, "Joko wahono");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();

	system("pause");

	return 0;
}