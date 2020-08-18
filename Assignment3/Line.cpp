#include <iostream>
#include <cmath>
#include "point.h"
#include "Line.h"

using namespace std;

Line::Line() {

}

Line::Line(Point A, Point B)
	: n1(A),n2(B)
 {
}

Line& Line::setPoint1casc(Point E) {
    n1 = E;
}

Line& Line::setPoint2casc(Point F) {
    n2 = F;
}

void Line::print() {
    n1.print();
    n2.print();
}

double Line::anglewXaxes(){
	const double pi = 3.141592; 
	return atan((n2.Y - n1.Y) / (n2.X - n1.X))*(180/pi);

}

double Line::lineEqCoeffients(double arr[]) {
	arr[0] = (-1)*(n1.Y - n2.Y)/(n2.X - n1.X);           
	arr[1] = (-1)*(n1.X * n2.Y - n1.Y * n2.X)/(n2.X - n1.X);			
	
}

double Line::itersectionPointW(Line C,Point D) {
	n3 = D;
	n3.X = ( (((n2.X * n1.Y) - (n1.X * n2.Y))*(C.n2.X - C.n1.X)) - ((C.n2.X * C.n1.Y) - (C.n1.X*C.n2.Y))*(n2.X - n1.X) ) / (((n2.X - n1.X)*(C.n2.Y - C.n1.Y)) - ((C.n2.X - C.n1.X) * (n2.Y - n1.Y)));
	n3.Y = ( (((n1.X * n2.Y) - (n1.Y * n2.X))*(C.n1.Y - C.n2.Y)) - ((n1.Y - n2.Y) * ((C.n1.X*C.n2.Y)-(C.n1.Y * C.n2.X)))) / (((n2.X - n1.X)*(C.n2.Y - C.n1.Y)) - ((C.n2.X - C.n1.X) * (n2.Y - n1.Y)));
	n3.print();
}

