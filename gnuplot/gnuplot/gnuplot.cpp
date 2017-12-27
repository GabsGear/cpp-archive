
#include <iostream>
#include "gnuplot.h"
using namespace std;

int main() {
	Gnuplot plot;

	plot("plot sin(x)");
	system("pause");


	return 0;
}