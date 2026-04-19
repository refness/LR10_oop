#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

class Rectangle {
private:
    int x1, y1; 
    int x2, y2;

public:
    Rectangle(); 
    Rectangle(int x1, int y1, int x2, int y2); 
    Rectangle(int width, int height); 

    void move(int dx, int dy);
    void mirrorHorizontal();

    friend std::ostream& operator<<(std::ostream& os, const Rectangle& rect);
};

#endif