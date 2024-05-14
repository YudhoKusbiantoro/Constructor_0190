// Destructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); //Constructor
	~angka(); //Destructor

	void cetakData();
	void isiData();
};
//Definis member Fuction
angka::angka(int i) { //Constructor
	panjang = i;
	arr = new int[i];
	isiData;
}

angka::~angka() {
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array sudah di lepaskan" << endl;
}

void angka::isiData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = "; cin >> arr[i];
	}
	cout << endl;
}; 

int main() {
	angka belajarcpp(3); //Constructordi panggil
	angka* ptrBelajarcpp = new angka(5); //Constructor di panggil
	delete ptrBelajarcpp; //Destructor di panggil

	return 0;
	//Destructor di panggil
}