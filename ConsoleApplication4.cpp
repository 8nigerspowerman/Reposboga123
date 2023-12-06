#include <iostream>
#include "Point.h"
#include "line.h"

using namespace std;

int main()
{
    Point p1 = Point(1);
    Point p2 = Point(4, 2);

    line line = line(p1, p2);
    cout << line;
}