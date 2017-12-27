
#include <iostream>
#include <map>
using namespace std;

class Person{
private:
    string name;
    int age;
public:
    Person(string name, int age):
        name(name), age(age){
        }
    void print() {
        cout << name << " :" << age << endl;
    }  
};

int main(){
    map<int, Person> people;

    people[0] = Person("Gabs", 23);
    people[0] = Person("Japs", 21);
    people[0] = Person("NUnes", 30);

    return 0;
}