#include <iostream>

using namespace std;

template<class T>
void print(T n){
    cout << n << endl;
}

void print(int value){
    cout <<"non template "<< value << endl;
}

int main(){
    print<string>("Hello");
    print<int>(5);
    print("Hello");
    print(5);

    return 0;
}