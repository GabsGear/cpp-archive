// Writing text files.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

	string inFileName = "test.txt";

	ifstream inFile;

	inFile.open(inFileName);

	if (inFile.is_open()) {
		
		string line;

		inFile >> line;

		//cout << line << endl;

		while ( inFile/*!inFile.eof()*/) {
			getline(inFile, line);
			cout << line << endl;
		}
		inFile.close();
	}
	else
		cout << "Erro ao abrir o arquivo " << inFileName <<  endl;

	return 0;
}

