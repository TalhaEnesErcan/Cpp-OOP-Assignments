#ifndef POINT_H
#define POINT_H

class Point{

public:
	Point();
    Point(double new_x, double new_y);
    void print();
    double magnitude();
    Point& setXcasc(double n_x);
    Point& setYcasc(double n_y);
    double X;
    double Y;
private:

    double n_x;
    double n_y;
};

#endif // POINT_H
