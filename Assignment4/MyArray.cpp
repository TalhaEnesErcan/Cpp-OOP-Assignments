#include <iostream>
#include <math.h>
#include "MyArray.h"

using namespace std;

MyArray::MyArray(){
	SIZE = 1;
	array = new double[SIZE];
	for(int i=0;i<SIZE;i++)
		array[i] = 0;
}

MyArray::MyArray(int n){
	SIZE = n;
	array = new double[SIZE];
	for(int i=0;i<SIZE;i++)
		array[i] = 0;	
}

MyArray::MyArray(int n, double val){
	SIZE = n;
	array = new double[SIZE];
	for(int i=0;i<SIZE;i++)
		array[i] = val;
}

MyArray::MyArray(const MyArray& src){
	SIZE = src.SIZE;
	array = new double[SIZE];
	for(int i=0;i<SIZE;i++)
		array[i] = src.array[i];
}

MyArray::MyArray(int n, double* arr){
	SIZE = n;
	array = new double[SIZE];
	for(int i=0;i<SIZE;i++)
		array[i] = arr[i];
}

ostream& operator<<( ostream& output, const MyArray& rhs){
   for(int i=0;i<rhs.SIZE;i++)
       output<<rhs.array[i]<<" ";
   return output;
}
istream& operator>>( istream& input, MyArray& rhs){
   for(int i=0;i<rhs.SIZE;i++)
       input>>rhs.array[i];
   return input;
}

void MyArray::printArray() const{
	for(int i=0;i<SIZE;i++)
		cout << array[i] << " ";
	cout << endl;
}

void MyArray::fill(double val){
	for(int i=0;i<SIZE;i++)
		array[i] = val;
}

int MyArray::getArraySize() const{
	return SIZE;
}

double* MyArray::getArray(){
	return array;
}

double* MyArray::getArray() const{
	return array;
}

double& MyArray::operator[](int ind){
	return array[ind];
}

double MyArray::operator[](int ind) const{
	return array[ind];
}

MyArray& MyArray::operator=(const MyArray& rhs) {
	for(int i=0;i<SIZE;i++)
		array[i] = rhs.array[i];
	return *this;
}

bool MyArray::operator!=(const MyArray& rhs) const{
	if(SIZE != rhs.SIZE)
		return true;
	for(int i=0;i<SIZE;i++){
		if(array[i] != rhs.array[i])
		return true;
	}
	return false;
}

bool MyArray::operator==(const MyArray& rhs) const{
	if(SIZE != rhs.SIZE)
		return false;
	for(int i=0;i<SIZE;i++){
		if(array[i] != rhs.array[i])
			return false;
	}
	return true;
}

MyArray& MyArray::operator+=(const MyArray& rhs){
	if (SIZE < rhs.SIZE){
		for(int i=0;i<SIZE;i++)
			array[i]+=rhs.array[i];
	}
	else {
		for(int i=0;i<rhs.SIZE;i++)
			array[i]+=rhs.array[i];
	}
	return *this;
}

MyArray& MyArray::operator-=(const MyArray& rhs) {
	if (SIZE < rhs.SIZE){
		for(int i=0;i<SIZE;i++)
			array[i] -= rhs.array[i];
	}
	else {
		for(int i=0;i<rhs.SIZE;i++)
			array[i] -= rhs.array[i];
	}
    return *this;
}
MyArray& MyArray::operator*=(const MyArray& rhs) {
   	if (SIZE < rhs.SIZE){
		for(int i=0;i<SIZE;i++)
			array[i]*=rhs.array[i];
	}
	else {
		for(int i=0;i<rhs.SIZE;i++)
			array[i]*=rhs.array[i];
	}
    return *this;
}
MyArray& MyArray::operator/=(const MyArray& rhs){
	if (SIZE < rhs.SIZE){
		for(int i=0;i<SIZE;i++)
			array[i]/=rhs.array[i];
	}
	else {
		for(int i=0;i<rhs.SIZE;i++)
			array[i]/=rhs.array[i];
	}
   return *this;
}
  
MyArray& MyArray::operator^(const int& pwr) {
   for(int i=0;i<SIZE;i++){
       array[i]=pow(array[i],pwr);
   }
   return *this;
}

