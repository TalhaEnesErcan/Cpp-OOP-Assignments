// moments.cpp
#include <iostream>

using namespace std;

double mass(int *ptr, int SIZE); 
double mean(int *ptr, int SIZE); 
double variance(int *ptr, int SIZE); 
double moment (int x, int y, int (*functionPtr)(int,int)); 

double mass(int *ptr, int SIZE){
	double count = 0;
	for(int i=0;i<SIZE;i++)
		count += ptr[i];	
	return count;
}

double mean(int *ptr, int SIZE){
	return (mass(ptr, SIZE)/SIZE);
}

double variance(int *ptr, int SIZE){
	double count = 0;
	for(int i=0;i<SIZE;i++)
		count += ((ptr[i]-mean(ptr, SIZE))*(ptr[i]-mean(ptr, SIZE)));
	return (count/(SIZE-1));
}

double moment (int *x, int y, double (*functionPtr)(int*,int)){
	double g = (*functionPtr)(x,y);
	return g;
}
int main() {
	
	double result;
	int array[10]={ 10, 0, 96, 56, 34, 29, 76, 46, 33, 24};
	double (*function_pointer[3])(int*,int)={mass, mean, variance};
	int i=0;
	for (i=0; i<3; i++)
		cout<< (*function_pointer[i])(array,10)<<endl;
	double (*functionPtr)(int*,int);
	functionPtr = variance;
	result=moment( array, 10, functionPtr);
	cout << "\nVariance is: " << result << endl;
	return 0;
}


