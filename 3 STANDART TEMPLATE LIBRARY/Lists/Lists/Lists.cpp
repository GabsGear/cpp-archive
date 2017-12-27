// Lists.cpp : Defines the entry point for the console application.
//

#include<iostream>
#include<list>
using namespace std;

int main() {

    list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    for(list<int>::iterator it = numbers.begin(); it!= numbers.end(); it++){
        cout << *it << endl;
    }

    //para deletar  numbers.erase(index);
    //adicninar numbers.insert(it, numero);

    return 0;
}

