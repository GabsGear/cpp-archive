// Exception basics.cpp : Defines the entry point for the console application.
//	TRATAMENTO DE ERRO

#include "stdafx.h"
#include <iostream>
using namespace std;

void mightGoWrong() { //função que pode dar errado

	bool error = true;

	if (error) {
		throw "Algo deu errado aqui";
	}
}

void usesMightGoWrong() {
	mightGoWrong();
}

int main() {

	try {
		usesMightGoWrong();
	}
	catch (const char * e) {
		cout << "mensagem do erro  " << e << endl;
	}


	cout << "continuando execucao " << endl;

    return 0;
}

