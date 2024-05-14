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
