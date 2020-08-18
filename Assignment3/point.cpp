#include <iostream>
#include <cmath>
#include "point.h"

using namespace std;

Point::Point(){
	X = 0;
	Y = 0;
}

Point::Point(double new_x, double new_y) {
	X = new_x;
	Y = new_y;
}

void Point::print() {
	cout << "(" << X << ", " << Y << ")" << endl;
}

double Point::magnitude() {
	return sqrt((X*X)+(Y*Y));
}

Point& Point::setXcasc(double n_x) {
    X = n_x;
    return *this;
}

Point& Point::setYcasc(double n_y) {
    Y = n_y;
    return *this;
}

