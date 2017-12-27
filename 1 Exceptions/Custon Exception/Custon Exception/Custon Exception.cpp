// Custon Exception.cpp : Defines the entry point for the console application.
//criar exceção cistomizada 

#include "stdafx.h"
#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception {
public:
	virtual const char* what() const throw(){ //Mensagem da exceção
		return "algo ruim aconteceu";
	}
};

class Test {
public:
	void goesWrong() {
		throw MyException();
	}
};

int main() {

	Test test;

	try {
		test.goesWrong();
	}
	catch (MyException &e) {
		cout << e.what() << endl;
	}

    return 0;
}

