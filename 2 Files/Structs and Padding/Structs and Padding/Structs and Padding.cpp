// Structs and Padding.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <string>
#include <fstream>

using namespace std;

#pragma pack(push, 1)

struct Person {
	char name[50];
	int age;
	double height;
};

#pragma pack(pop)

int main() {


	Person someone = {"Frodo", 220, 0.8};

	string fileName = "test.bin";


	//ESCREVER ARQUIVO BINARIO

	ofstream outputFile;
	outputFile.open(fileName, ios::binary);

	if (outputFile.is_open()) {
		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

		outputFile.close();
	}

	else
		cout << "Nao foi possivel criar o arquivo " + fileName << endl;

	//LER ARQUIVO BINARIO

	Person AlguemAi = {};

	ifstream inputFile;
	inputFile.open(fileName, ios::binary);

	if (inputFile.is_open()) {

		inputFile.read(reinterpret_cast<char *>(&AlguemAi), sizeof(Person));

		inputFile.close();
	}

	else
		cout << "Nao foi possivel criar o arquivo " + fileName << endl;

	cout << AlguemAi.name << ", " << AlguemAi.age << ", " << AlguemAi.height << endl;


    return 0;
}

