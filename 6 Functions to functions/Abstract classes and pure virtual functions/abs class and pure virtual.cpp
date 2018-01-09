#include <iostream>

using namespace std;

class Animal
{
  private:
  public:
    virtual void run() = 0;
    virtual void speak() = 0;
};

class Dog : public Animal
{
  private:
  public:
    virtual void speak()
    {
        cout << "woof!" << endl;
    }
};

class Labrador : public Dog
{
  public:
    Labrador(){
        cout << "new labrador" << endl;
    }
    void run(){
        cout << "labrador running" << endl;
    }
};

void test(Animal &a){
    a.run();
};

int main()
{
    Labrador caramelo;
    Labrador labs[5];
    caramelo.speak();
    caramelo.run();

    Animal *animals[5];
    animals[0]= &caramelo;

    animals[0]->speak();
    test(caramelo);  

    return 0;
}