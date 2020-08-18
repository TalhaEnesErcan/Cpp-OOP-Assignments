#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

const double pi = 3.141592;

double exponential(double x){
	int n_array[3] = {10,50,100};
	for(int j=0;j<3;j++){
		int n = n_array[j];
		double output = 1;
		double temp = 1;
		for(int i=1;i<=n;i++){
			temp = (temp*x)/i;
			output += temp;
		}
		cout << "The e power x value is " << output << " for n = " << n << ", and x = " << x << endl;
		cout << "Real value of e power x is: " << exp(x) << endl;
	}
}

double sine(double x){
	double output = x;
	double denominator = 1;
	double numerator;
	double sign = -1;
	int n_array[3] = {10,50,100};
	for(int j=0;j<3;j++){
		int n = n_array[j];
		for(int i=3;i<=n;i+=2){
			numerator = pow(x,i);
			denominator *= (i * (i-1));
			output += (numerator / denominator) * sign;
			sign *= (-1);
		}
		cout << "\nSine value is: " << output << " for n = " << n << ", and for x = " << x << endl;
		cout << "Real value of sine(x) is: " << sin(x) << endl;
	}
}

double cosine(double x){
	double output = 1;
	double denominator = 1;
	double numerator;
	double sign = -1;
	int n_array[3] = {10,50,100};
	for(int j=0;j<3;j++){
		int n = n_array[j];
		for(int i=2;i<=n;i+=2){
			numerator = pow(x,i);
			denominator *= (i * (i-1));
			output += (numerator / denominator) * sign;
			sign *= (-1);
		}
		cout << "\nCosine value is: " << output << " for n = " << n << ", and for x = " << x << endl;
		cout << "Real value of cos(x) is: " << cos(x) << endl;
	}
}

int main(){
	double values_array1[3] = {0.1,0.5,1};
	double values_array2[3] = {((-1)*(pi/6)) , (pi/4), (pi/3)};
	for(int k=0;k<3;k++){
		cout <<setprecision(10) << exponential(values_array1[k]) << endl;
		cout << "**********************************" << endl;
		cout << setprecision(10) << sine(values_array2[k]) << endl;
		cout << "**********************************" << endl;
		cout << setprecision(10) << cosine(values_array2[k]) << endl; 
		cout << "**********************************" << endl;
	}
	return 0;
}
