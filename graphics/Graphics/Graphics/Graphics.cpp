// Graphics.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream outFile;

	string outputFileName = "text.txt";

	outFile.open(outputFileName);


	if (outFile.is_open()) {
		for (int i = 0; i < 100; i++) {
			outFile << i << " " << i << endl;
		}

		outFile.close();
	}
	else {
		cout << "Não foi possivel criar o arquivo" << endl;
	}

}

