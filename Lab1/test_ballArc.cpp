#include <iostream>

using namespace std;

void calculation(double v0, double h0, double teta0);
    
int main(){
	
	for(double teta0 = 0; teta0<=90; teta0++){
    	calculation(20,30,teta0);
}
	cout << "**************************************" << endl;
	cout << "New calculation for another task " << endl;
	for (double v0 = 1;v0<=20;v0++){
		calculation(v0,30,75);
	}
	cout << "**************************************" << endl;
	cout << "New calculation for another task " << endl;
	for(double h0=0;h0<=30;h0++){
		calculation(20,h0,75);
	}	
	return 0;
}

