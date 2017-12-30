#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Test{
    int id;
    string name;

public:
    Test(int id, string name): id(id), name(name){}
    void print(){
        cout << id << ": " << name << endl;
    }

    /*bool operator<(const Test &other) const{
        return name < other.name;
    }*/
    friend bool comp(const Test &o, const Test &b);
};

bool comp(const Test &o, const Test &b){
    return o.name < b.name;
}

int main(){
    vector<Test> tests;

    tests.push_back(Test(1, "gabs"));
    tests.push_back(Test(5, "carl"));
    tests.push_back(Test(2, "ronaldo"));
    tests.push_back(Test(9, "antonio"));

    sort(tests.begin(), tests.end(), comp);

    for(int i = 0; i < tests.size(); i++){
        tests[i].print();
    }

    return 0;
}