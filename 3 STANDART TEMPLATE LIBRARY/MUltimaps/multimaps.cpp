#include <iostream>
#include <map>
using namespace std;

int main(){
    multimap<int, string> mmap;

    mmap.insert(make_pair(20, "cara 1"));
    mmap.insert(make_pair(30, "cara 2"));
    mmap.insert(make_pair(17, "cara 4"));
    mmap.insert(make_pair(44, "cara 5"));

    for (multimap<int, string> ::iterator it=mmap.begin(); it != mmap.end(); it++){
        cout << it->first << " : " << it->second << endl;
    }

    cout<< endl<<endl;

     for (multimap<int, string> ::iterator it=mmap.find(20); it  != mmap.end(); ++it){
            cout << it->first << " : " << it->second<< endl;
     }
     
    return 0;
}