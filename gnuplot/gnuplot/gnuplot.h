// gnuplot.cpp : Defines the entry point for the console application.
//
#ifndef GNUPLOT_H_
#define GNUPLOT_H_
#include <string>
#include <iostream>
using namespace std;

class Gnuplot {
public:
	Gnuplot();
	~Gnuplot();
	void operator ()(const string & command); // manda o comando objeto + parametro

protected:
	FILE *gnuplotpipe;
};

Gnuplot::Gnuplot() { //popen da o controle a um rocesso de entrada ou saida de streabs
	gnuplotpipe = popen("gnuplot", "w");

	if (!gnuplotpipe) {
		cerr << ("Gnuplot not found !"); //gera erro 
	}
}

Gnuplot::~Gnuplot() {
	fprintf(gnuplotpipe, "exit\n");
	pclose(gnuplotpipe);
}

void Gnuplot::operator()(const string & command) {
	fprintf(gnuplotpipe, "%s\n", command.c_str()); //printar no arquivo
	fflush(gnuplotpipe); //limpar o buffer 
};

#endif
