//convert.cpp
#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main(int argc, char*argv[]){
	
	long n = strtol(argv[1], NULL, 10);  // string to long(string, endpointer, base)
	long base = strtol(argv[2], NULL, 10); // string to long(string, endpointer, base)
	
	int num = 0;
	int i = 0; 
	int division = n; 
	int remainder = 0; 
	int ndigits=1;
	
	while(n > pow(base, ndigits))
		ndigits ++;
	
	while(i < ndigits){
		
		remainder = division % base;
		division = division / base;
		
		num += pow(10,i) * remainder;
		i++;
		}
	cout << "The new value of "<< n << " is " << num << " in base " << base << endl;
	cout << "For this value ndigits is : " << ndigits << endl;
	cout << "****************************" << endl;

	return 0;
}


