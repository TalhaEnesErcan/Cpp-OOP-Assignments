#include <iostream>
#include <math.h>
using namespace std;

void calculation(double v0, double h0, double teta0){
    const double pi = 3.141592;
	const double g = 9.8;
	double v0y = v0 * sin(teta0*(pi/180));
	double v0x = v0 * cos(teta0*(pi/180));
	double trise = (v0y - 0)/g;
	double hrise = (0.5)*(v0y*v0y)/g;
	double hfall = hrise + h0;
	double vy = sqrt(2*g*hfall);
	double tfall = (vy - 0)/g;
	double x = v0x * (trise + tfall);
	double vx = v0x;
	double v = sqrt((vy*vy)+(vx*vx));
	double teta = (atan((((-1)*vy)/vx))*180)/pi;
	cout << "Initial values are\nTeta0 is " << teta0 << ", v0 is " << v0 << ", h0 is " << h0 << endl;
	cout << "(v,teta) vector is (" << v << "," << teta << ")" << endl;
	cout << "The maximum height it reaches to (h) is " << hfall  << endl;
	cout << "The time passes during this travel (t) is " << trise + tfall << endl;
	cout << "The horizontal distance it travels (x) is " << x  << endl;
	cout << "*************************************************************************" << endl;
    
}

