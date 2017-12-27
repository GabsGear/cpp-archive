#include <iostream>
#include <set>

using namespace std;

class Test {
    int id;
    string name;

public:
    Test(): id(0), name(""){

    }
    Test(int id, string name):id(id), name(name){ //constructor

    }

    void print() const {
        cout << id << ": " << name << endl;
    }

    bool operator<(const Test &other) const{
        return name < other.name;
    }
};

int main(){

    set<int> numbers;

    numbers.insert(50);
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(20);
    numbers.insert(25);

    for(set<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        cout << *it << endl;
    }

    set<int>::iterator find = numbers.find(20);
    if(find != numbers.end()){
        cout << *find << endl;
    }

    if(numbers.count(20)) {
        cout << "numero encontrado" << endl;
    }
    else
        cout << "numero nao encontrado" << endl;

    set<Test> tests;
    tests.insert(Test(10, "Gabss"));
    tests.insert(Test(10, "Gabs"));
    tests.insert(Test(20, "jogr"));
    tests.insert(Test(5, "carl"));

    for(set<Test>::iterator it = tests.begin(); it != tests.end(); it++){
        it->print();
    }

//set exibe ordenado sem elementos repetidos
    return 0;
}