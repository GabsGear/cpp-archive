// vectors and memory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<double> numbers(0);

	cout << "Size " << numbers.size() << endl;

	int capacity = numbers.capacity();

	cout << "Capacity " << capacity << endl;

	for (int i = 0; i < 10000; i++) {

		if (numbers.capacity() != capacity) {
			capacity = numbers.capacity();
			cout << "Capacity " << numbers.capacity() << endl;
		}

		numbers.push_back(i);
	}

	numbers.reserve(1000);
	numbers.resize(100);
	cout << numbers[2] << endl;
	cout << "Size " << numbers.size() << endl;
	numbers.clear();

    return 0;
}

