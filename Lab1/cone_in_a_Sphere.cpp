#include <iostream>
#include <math.h>

using namespace std;

int main(){
	const double pi = 3.1415192;
	int rs = 10;
	int rc = 8;
	
	double h = rs + sqrt((rs*rs)-(rc*rc));
	double volumesphere = (1.3333333333)*pi*(rs*rs*rs);
	double volumecone =   (0.3333333333)*pi*(rc*rc)*h;
	double spacearray[91];
	int count = 0;
	cout << "a) \n" << endl;
	cout << "Initial values are rs = 10, rc = 8" << endl;
	cout << "*****Outputs*****" << endl;
	cout << "The height of the cone is " << h << ", and the volume of the cone is " << volumecone << ", and the volume of the sphere is " << volumesphere <<endl;
	cout << "*****************" << endl;
	cout << "\nb) and c) \n" << endl;
	for (double i=0.1*rs; i<=rs; i+=0.1){
		double h = rs + sqrt((rs*rs)-(i*i));
		cout << "Height is " << h << " for Rc is " << i << endl;
		double volumecone =  (0.3333333333)*pi*(i*i)*h;
		double volumesphere = (1.3333333333)*pi*(rs*rs*rs);
		cout << "The volume of the space is "<< volumesphere - volumecone << " for Rc is " << i << endl;
		spacearray[count] = volumesphere - volumecone;
		count++;
		cout << "*****************" << endl;
		
	}
	double min = spacearray[0];
	for(int j=0;j<=90;j++){
		if (spacearray[j]<min){
			min = spacearray[j];
		}
	}
	cout << "The minimum value of volume of the space is " << min << endl;
	return 0;
}
	
