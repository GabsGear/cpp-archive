#include <iostream>

using namespace std;

void test(int x)
{
    cout << "hello " << x << endl;
};

int main()
{
    test(5);

    void (*pTest)(int);
    pTest = &test;

    //  (*pTest)();
    pTest(10);

    return 0;
}