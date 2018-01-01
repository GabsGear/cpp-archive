#include <iostream>
#include <string>

using namespace std;

class Test
{
    int id;
    string name;

  public:
    Test() : id(0), name("")
    {
    }

    Test(int id, string name) : id(id), name(name)
    {
    }

    void print() const
    {
        cout << id << ": " << name << endl;
    }

    const Test &operator=(const Test &other)
    {
        cout << "Assignment running" << endl;
        this->id = other.id;
        this->name = other.name;
        return *this;
    }

    Test(const Test &other)
    {
        cout << "Copy constructor running" << endl;
        this->id = other.id;
        this->name = other.name;
    }

    friend ostream &operator<<(ostream &out, const Test &test){
        out << test.id << ": " << test.name;
        return out;
    }
};

int main()
{
    Test test1(10, "Gabs");
   
    test1.print();

    cout << test1 << endl; 

    return 0;
}