

#include <iostream>
#include "Line.h"
#include "Point.h"
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{	
	Point p1(3,1);

	cout<<"mag of "; p1.print(); 
	cout<<"is: "<<p1.magnitude()<<endl;
	Point p2(5,9); p2.print();
	Point p3(p2);  p3.print();
    Point p4(-3,2);
	Point p5(-10,7);
	
	cout << "\ntwo points representing the line are:" << endl;
	double c1[2]={0}, c2[2]={0};
	Line line1(p1,p2);
	line1.print(); 
	cout<<setprecision(3);
	cout<<"angle with x axis is "<<line1.anglewXaxes()<<endl;
	line1.lineEqCoeffients(c1);
	cout<< "the line equation is:"<<c1[0]<<((c1[1]>0)?"*x + ":"*x ")<<c1[1]<<" = y"<<endl;

	cout << "\ntwo points representing the line are:" << endl;
	Line line2(p4, p5);
	line2.print(); 
	cout<<"angle with x axis is "<<line2.anglewXaxes()<<endl;
	line2.lineEqCoeffients(c2);
	cout<< "the line equation is:"<<c2[0]<<((c2[1]>0)?"*x + ":"*x ")<<c2[1]<<" = y"<<endl;
	
	Point p6;

	cout<<"\nintersection point of the lines with the equations\n";
	cout<<c1[0]<<((c1[1]>0)?"*x + ":"*x ")<<c1[1]<<" = y  and "<<c2[0]<<((c2[1]>0)?"*x + ":"*x ")<<c2[1]<<" = y  is\n";
	line2.itersectionPointW(line1,p6); 
	// !!! p6 stores the intersection point of the lines
	
	cout << "\ntwo points representing the line are:" << endl;
	Point p7(4, 8);	
	Point p8(9, 7);	
	line1.setPoint1casc(p7).setPoint2casc(p8);
	line1.print();

	p7.setXcasc(7).setYcasc(10);
	cout<<"\nthe point is\n";
	p7.print();

	return 0;
}

/*

$ ./test
mag of (3, 1)
is: 3.16228
(5, 9)
(5, 9)

two points representing the line are:
(3, 1)
(5, 9)
angle with x axis is 76
the line equation is:4*x -11 = y

two points representing the line are:
(-3, 2)
(-10, 7)
angle with x axis is -35.5
the line equation is:-0.714*x -0.143 = y

intersection point of the lines with the equations
4*x -11 = y  and -0.714*x -0.143 = y  is
(2.3, -1.79)

two points representing the line are:
(4, 8)
(9, 7)

the point is
(7, 10)

*/
