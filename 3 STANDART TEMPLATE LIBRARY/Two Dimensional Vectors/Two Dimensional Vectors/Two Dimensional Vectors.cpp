// Two Dimensional Vectors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;



int main() {

	vector <vector<int>> grid(3, vector<int>(4, 7)); //linha, coluna e inicialização

	grid[1][1] = 2;

	for (int row = 0; row < grid.size(); row++) {
		for (int col = 0; col < grid[row].size(); col++) {
			cout << grid[row][col] << flush;
		}
		cout << endl;
	}

    return 0;
}

