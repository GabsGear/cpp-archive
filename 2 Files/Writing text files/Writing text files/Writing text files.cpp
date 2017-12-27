// Writing text files.cpp : Defines the entry point for the console application.
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
		outFile << "HEYAAAAAAAAAA AA" << endl;
		outFile << 123412 << endl;
		outFile.close();
	}
	else {
		cout << "Não foi possivel criar o arquivo" << endl;
	}


    return 0;
}

