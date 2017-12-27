// Parsing text files.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {

	string relatorio = "arquivo.txt";
	ifstream input;

	input.open(relatorio);

	if (!input.is_open()) {
		cout << "não foi possivel abrir o arquivo" << relatorio << endl;
		return 1;
	}

	while (input) {
		string line;

		getline(input, line, ':'); //limitar ate aonde vai colher a linha

		int numero;
		input >> numero;

		//input.get();
		input >> ws;

		if (!input) {
			break;
		}

		cout << "'"  << line << "'" << " -- " << "'" << numero << "'" << endl;
	}

	input.close();
    return 0;
}

