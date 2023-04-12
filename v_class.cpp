#include "v_class.h"

Vector::Vector() {
    this->end_x = 0;
    this->end_y = 0;
}

Vector::Vector(int v1, int v2) {
    this->end_x = v1;
    this->end_y = v2;
    this->cordinates[0] = end_x - start_x;
    this->cordinates[1] = end_y - start_y;
}

void Vector::setXY(int value1, int value2) {
    this->end_x = value1;
    this->end_y = value2;
    setCord();
}

Vector::~Vector() {}

void Vector::setCord() {
    this->cordinates[0] = end_x - start_x;
    this->cordinates[1] = end_y - start_y;
}

int Vector::getX() {
    return this->end_x;
}

int Vector::getY() {
    return this->end_y;
}

void Vector::printCord() {
    cout << "Cordinates: (" << cordinates[0] << "; " << cordinates[1] << ")" << endl;
}

void Vector::vectorLen() {
    float length = abs(sqrt(pow(cordinates[0], 2) + pow(cordinates[1], 2)));
    cout << "Lenght of vector: " << setprecision(3) << length << endl;
}

Vector& Vector::operator*(int value) {
    this->cordinates[0] *= value;
    this->cordinates[1] *= value;

    return *this;
}

Vector Vector::operator-(Vector& other) {
    Vector temp;
    temp.cordinates[0] = this->cordinates[0] - other.cordinates[0];
    temp.cordinates[1] = this->cordinates[1] - other.cordinates[1];
    temp.end_x = start_x + cordinates[0];
    temp.end_y = start_y + cordinates[1];

    return temp;
}
