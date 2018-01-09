#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool match(string test)
{
    return test.size() == 3;
}

int countStrings(vector<string> &tests, bool (*test)(string test)){
    int tally = 0;
    for (int i =0; i < tests.size(); i++){
        if(match(tests[i])){
            tally++;
        }
    }    
    return tally;
}

int main()
{
    vector<string> tests;

    tests.push_back("one");
    tests.push_back("two");
    tests.push_back("three");
    tests.push_back("four");
    tests.push_back("two");

    cout << count_if(tests.begin(), tests.end(), match) << endl;
    cout << countStrings(tests, match) << endl;
    return 0;
}