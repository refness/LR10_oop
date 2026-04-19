#include "Rectangle.h"

Rectangle::Rectangle() : x1(0), y1(0), x2(0), y2(0) {}

Rectangle::Rectangle(int x1Val, int y1Val, int x2Val, int y2Val)
    : x1(x1Val), y1(y1Val), x2(x2Val), y2(y2Val) {
}

Rectangle::Rectangle(int width, int height)
    : x1(0), y1(0), x2(width), y2(height) {
}

void Rectangle::move(int dx, int dy) {
    x1 += dx; x2 += dx;
    y1 += dy; y2 += dy;
}

void Rectangle::mirrorHorizontal() {
    int newX2 = 2 * x1 - x2;

    x2 = x1;
    x1 = newX2;
}

std::ostream& operator<<(std::ostream& os, const Rectangle& rect) {
    os << "{(" << rect.x1 << ", " << rect.y1 << "), (" << rect.x2 << ", " << rect.y2 << ")}";
    return os;
}