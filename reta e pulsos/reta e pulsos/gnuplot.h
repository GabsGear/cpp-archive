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
	void operator ()(const string & command); // manda o comando

protected:
	FILE *gnuplotpipe;
};

Gnuplot::Gnuplot() {
	//"\"C:/Program Files/CA/BrightStor ARCserve Backup/ca_qmgr.exe\"
	gnuplotpipe = _popen("\"C:/Program Files/gnuplot/bin/gnuplot\"", "w");

	if (!gnuplotpipe) {
		cerr << ("Gnuplot not found !");
	}
}

Gnuplot::~Gnuplot() {
	fprintf(gnuplotpipe, "exit\n");
	_pclose(gnuplotpipe);
}

void Gnuplot::operator()(const string & command) {
	fprintf(gnuplotpipe, "%s\n", command.c_str());
	fflush(gnuplotpipe);
};

#endif
