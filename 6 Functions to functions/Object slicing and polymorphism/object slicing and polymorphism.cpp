#include <iostream>

using namespace std;

class parent
{
  private:
    int one;

  public:
    parent() : one(0) {}
    parent(const parent &other)
    {
        cout << "copy parent" << endl;
    }
    virtual void print()
    {
        cout << "parent" << endl;
    }
    virtual ~parent() {}
};

class child : public parent
{
  private:
    int two;

  public:
    child() : two(0) {}
    void print()
    {
        cout << "parent" << endl;
    }
};

int main()
{
    child c1;
    parent &p1 = c1;
    p1.print();

    parent p2 = child();
    p2.print();

    return 0;
}