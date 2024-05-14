// Chainfunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class buku
{
	string judul;

public:
	buku setJudul(string judul)
	{
		this->judul = judul;
		return *this; //chain function
	}
	string getJudul()
	{
		return this->judul;
	}
} bukunya;
