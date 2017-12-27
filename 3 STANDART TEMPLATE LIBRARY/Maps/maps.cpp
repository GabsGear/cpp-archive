#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int>ages;

    ages["Mike"] = 40;
    ages["carlos"] = 10;
    ages["julia"] = 25;

    cout << ages["carlos"] << endl;

    pair<string, int> addToMap("Peter", 100);
    ages.insert(addToMap);

    if(ages.find("MIke") != ages.end()){
        cout << "Found MIke" << endl;
    }
    else
        cout << "nao encontrado" << endl;


    for(map<string, int>::iterator it=ages.begin(); it != ages.end(); it++){
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}