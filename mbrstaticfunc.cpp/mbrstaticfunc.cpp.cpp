// mbrstaticfunc.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; /*Definisi Function*/ }
	static int getNim() { return nim; /*Definisi Function*/ }

	mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID =  " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Sri Dadi");
	mahasiswa mhs2("Budi Jatmiko");
	mahasiswa::setNim(9); //Mengakses nim melalui statis memeber function "setNim"
	mahasiswa mhs3("Andi Janu");
	mahasiswa mhs4("Joko wahono");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl; //mengakases nim
	system("pause");

	return 0;

}

