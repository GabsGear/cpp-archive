// reta e pulsos.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "gnuplot.h"
using namespace std;


int main() {
	Gnuplot plot;
	ofstream outFile;
	string fileName = "graficos.txt";



	outFile.open(fileName);

	if (outFile.is_open()) {

		for (int i = -500; i <= 0; i++) {
			outFile << i << " " << i*i << endl;
		}
		for (int i = 0; i <= 500; i++) {
			outFile << i << " " << i*i << endl;
		}
	}
	else
		cerr << "Erro ao abrir o arquivo" << endl;

	outFile.close();


	plot("plot 'graficos.txt' title 'grafico da reta' with lines");
	system("pause");

    return 0;
}

