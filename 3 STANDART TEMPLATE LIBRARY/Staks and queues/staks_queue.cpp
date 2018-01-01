#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test
{
  private:
    string name;

  public:
    Test(string name) : name(name)
    {
    }

    ~Test()
    {
        //cout << "objeto destruido"<<endl;
    }
    void print()
    {
        cout << name << endl;
    }
};

int main()
{

    stack<Test> testStack;
    testStack.push(Test("gabs"));
    testStack.push(Test("bri"));
    testStack.push(Test("el"));

    /* inconsistente, pois o ponteiro aponta para um objeto destruido
    Test &test1 = testStack.top();
    test1.print();
    testStack.pop();
    test1 = testStack.top();
    test1.print();
*/
    while (testStack.size() > 0)
    {
        Test &test = testStack.top();
        test.print();
        testStack.pop();
    }

    /**************************QUEUE FIFO**********************************/
    queue<Test> testQueue;
    testQueue.push(Test("gabs"));
    testQueue.push(Test("bri"));
    testQueue.push(Test("el"));

    /* inconsistente, pois o ponteiro aponta para um objeto destruido
    Test &test1 = testStack.top();
    test1.print();
    testStack.pop();
    test1 = testStack.top();
    test1.print();
*/
    while (testQueue.size() > 0)
    {
        Test &test = testQueue.front();
        test.print();
        testQueue.pop();
    }

    return 0;
}