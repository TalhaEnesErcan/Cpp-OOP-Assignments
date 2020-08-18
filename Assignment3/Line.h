#ifndef LINE_H
#define LINE_H
#include "point.h"
class Line{
public:
	Line();
    Line(Point A, Point B);
    void print();
    double anglewXaxes();
    double lineEqCoeffients(double arr[]);
    double itersectionPointW(Line C,Point D);
    Line& setPoint1casc(Point E);
    Line& setPoint2casc(Point F);
private:
    double arr[];
    Point A,B,D,E,F;
	Point n1,n2,n3;
};

#endif // LINE_H
