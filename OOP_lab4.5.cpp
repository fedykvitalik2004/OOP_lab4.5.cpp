#include <iostream>
#include "Ball.h"
#include "Parallelepiped.h"
#include <typeinfo>

using namespace std;

int main()
{
    Body** body = new Body * [2];
    double a, b, c;

    cout << "Enter values for parallelepiped:" << endl;
    cout << " a="; cin >> a;
    cout << " b="; cin >> b;
    cout << " c="; cin >> c;
    body[0] = new Parallelepiped(a, b, c);
    body[0]->Display();
    cout << "Volume is " << body[0]->Volume() << endl;
    cout << "Square is " << body[0]->Surface() << endl;
    cout << "Base class: " << typeid(body[0]).name() << endl;
    cout << "Deritative class: " << typeid(*body[0]).name() << endl << endl;

    cout << "Enter value for ball:" << endl;
    cout << " R="; cin >> a;
    body[1] = new Ball(a);
    body[1]->Display();
    cout << "Volume is " << body[1]->Volume() << endl;
    cout << "Square is " << body[1]->Surface() << endl;
    cout << "Base class: " << typeid(body[1]).name() << endl;
    cout << "Deritative class: " << typeid(*body[1]).name() << endl << endl;

    return 0;
}