#pragma once
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Vector {
    int start_x = 0;
    int start_y = 0;
    int end_x;
    int end_y;
    int cordinates[2];
public:
    Vector();
    Vector(int v1, int v2);
    ~Vector();
    void setXY(int value1, int value2);
    void setCord();
    int getX();
    int getY();
    void printCord();
    void vectorLen();
    Vector& operator *(int value);
    Vector operator - (Vector& other);
};
