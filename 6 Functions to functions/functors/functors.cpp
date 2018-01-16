#include <iostream>
#include <string>

using namespace std;

struct MatchTest
{
    bool operator()(string &text)
    {
        return text == "lion";
    }
};

void check(string text){

};

int main()
{
    MatchTest pred;

    string value = "lion";

    cout << pred(value) << endl;

    return 0;
}