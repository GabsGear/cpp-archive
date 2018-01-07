#include <iostream>

using namespace std;

template <class T>

void print(T n){
    cout << n << endl;
}


int main(){

    print<string>("Hello");
    print<int>(5);
    print("python???");
    return 0;
}