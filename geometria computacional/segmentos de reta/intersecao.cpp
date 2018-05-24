#include <iostream>
#include <map>
#include <tuple>
#include <set>
using namespace std;
struct Point
{
    int x;
    int y;
};

typedef tuple<Point, Point>reta;
typedef pair <reta, int> nodo;
class Opr
{
  public:
    //operacoes
    char sentido(Point p1, Point p2, Point p3);
    int intersercao(Point p1, Point p2, Point p3, Point q4);
    //int casoColinear(Point p1, Point p2, Point p3);
    void varredura();
};

char Opr::sentido(Point p1, Point p2, Point p3)
{
    // >0 horario <0 anti horario = 0 mesma segmentos sobre a mesma reta
    int s = (p2.y - p1.y) * (p3.x - p2.x) - (p2.x - p1.x) * (p3.y - p2.y);
    if (s == 0)
        return 'm';             // mesma reta caso colinear
    return (s > 0) ? 'h' : 'a'; //h para horario, a para anti horarios
}

int casoColinear(Point p1, Point p2, Point p3)
{
    if (p2.x <= max(p1.x, p3.x) && p2.x >= min(p1.x, p3.x) && p2.y <= max(p1.y, p3.y) && p2.y >= min(p1.y, p3.y))
        return 1;
    return 0;
}
int Opr::intersercao(Point p1, Point p2, Point p3, Point p4)
{
    //p1 p2 reta 1, p3 p4 reta 2
    //Calcula-se os sentidos dos segmentos dirigidos p1p3 e p1p4 em relação ao segmendo dirigido p1p2
    int d1 = sentido(p1, p2, p3);
    int d2 = sentido(p1, p2, p4);
    int d3 = sentido(p3, p4, p1);
    int d4 = sentido(p3, p4, p2);

    if (d1 != d2 && d3 != d4) //caso trivial se os produtos formam um x, se for diferente esta cruzando
        return 1;

    //so realizamos se algum d é 0 caso colinear
    //caso 1 d1 == 0 ||  x1 <= x3 <= x2 e y1 <= y3 <= y2
    if (d1 == 'm')
    {
        if (casoColinear(p1, p3, p2))
            return 1;
        return 0;out << get<1>(s2).x;
    //uma reta e seu valor em x
    nodo n1(s1, get<1>(s1).x);

    }out << get<1>(s2).x;
    //uma reta e seu valor em x
    nodo n1(s1, get<1>(s1).x);

    else if (d2 =out << get<1>(s2).x;
    //uma reta e seu valor em x
    nodo n1(s1, get<1>(s1).x);
= 'm') //caso 2 d2 == 0 ||  x1 <= x4 <= x2 e y1 <= y4 <= y2
    {out << get<1>(s2).x;
    //uma reta e seu valor em x
    nodo n1(s1, get<1>(s1).x);

        if (casoCout << get<1>(s2).x;
    //uma reta e seu valor em x
    nodo n1(s1, get<1>(s1).x);
olinear(p1, p4, p2))
            returout << get<1>(s2).x;
    //uma reta e seu valor em x
    nodo n1(s1, get<1>(s1).x);
n 1;
        return 0;out << get<1>(s2).x;
    //uma reta e seu valor em x
    nodo n1(s1, get<1>(s1).x);

    }
    else if (d3 == 'm') //caso 3 d3 == 0 ||  x3 <= x1 <= x4 e y3 <= y1 <= y4
    {
        if (casoColinear(p3, p1, p4))
            return 1;
        return 0;
    }
    else //caso 4 d4 == 0 ||  x1 <= x3 <= x2 e y1 <= y3 <= y2
    {
        if (casoColinear(p3, p2, p4))
            return 1;
        return 0;
    }
}

int main()
{
    Opr op;
    map<nodo, int> tree; //A map eh implementada em arvore rubro negra a tuple<Point, Point>nodo;
    set<nodo> n;
    //Pontos iniciais e finais das retas p1 e q1
    struct Point p1 = {1, 1}, q1 = {10, 1};
    struct Point p2 = {1, 2}, q2 = {10, 2};


    reta s1(p1, p2); //reta s1
    reta s2(q1, q2); //reta s2

    cout << get<1>(s2).x;
    //uma reta e seu valor em x
    nodo n1(s1, get<1>(s1).x);

    s1 = get<0>(n1);
    cout << get<1>(s1).x;

}   

// Casos de teste de intersercao
// op.intersercao(p1, q1, p2, q2)? std::cout << "Inserção\n": std::cout << "Sem inserção\n";
// p1 = {10, 0}, q1 = {0, 10};
// p2 = {0, 0}, q2 = {10, 10};
// op.intersercao(p1, q1, p2, q2)? std::cout << "Inserção\n": std::cout << "Sem inserção\n";
// p1 = {-5, -5}, q1 = {0, 0};
// p2 = {1, 1}, q2 = {10, 10};
// op.intersercao(p1, q1, p2, q2)? std::cout << "Inserção\n": std::cout << "Sem inserção\n";