// Standart exceptions.cpp : Defines the entry point for the console application.
//usando exeções para por exemplo verificar se a memoria foi alocada


#pragma warning( push )
#pragma warning( disable : C2148)

#include "stdafx.h"
#include  <iostream>
using namespace std;

class CanGoWrong {
public:
	CanGoWrong() {
		char * pMemory = new char[99999]; //alocando a memoria vai dar errado
		delete[] pMemory;
	}
};


int main() {

	try {
		CanGoWrong wrong;
	}
	catch (bad_alloc &e) {
		cout << e.what() << endl;
	}

	cout << "ainda rodando" << endl;

    return 0;
}

