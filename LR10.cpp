#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");

    Rectangle r1;                   
    Rectangle r2(10, 10, 50, 40);  
    Rectangle r3(20, 15);          

    cout << "Створенi прямокутники:" << endl;
    cout << "r1: " << r1 << endl;
    cout << "r2: " << r2 << endl;
    cout << "r3: " << r3 << endl;

    cout << "\nПеремiщуємо r2 на dx=10, dy=-5..." << endl;
    r2.move(10, -5);
    cout << "Новий стан r2: " << r2 << endl;

    cout << "\nДзеркальне вiдображення r3 вiдносно лiвої вертикалi..." << endl;
    cout << "Старий стан r3: " << r3 << endl;
    r3.mirrorHorizontal();
    cout << "Новий стан r3: " << r3 << endl;

    return 0;
}