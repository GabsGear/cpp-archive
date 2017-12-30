#include <stdlib.h>
#include <iostream>
#include <ctime>
using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruit, score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup(){
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruit = rand() % width;
    fruit = rand() % height;
}

void Draw(){
    getchar();
    for (int i = 0; i < width; i++){
        cout << "#";
    }
    cout << endl;

    for(int i = 0; i < height; i++){
        for(int j = 0; i < width; j++){
            if(j == 0)
                cout << "#";
            else
                cout << " ";
            if(j == width - 1)
                cout << "#";
        }
    }

    for (int i = 0; i < width; i++){
        cout << "#";
    }
    cout << endl;
}

void Input(){

}

void Logic(){

}

int main(){
    Setup();
    while (!gameOver){
        Draw();
        Input();
        Logic();
       // sleep(10);
    }
}