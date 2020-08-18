#include <iostream>
#include <math.h>

using namespace std;

void insertionSort(const int grades[], int result[], int SIZE);
void selectionSort(const int grades[], int result[], int SIZE);
int median(const int grades[], int SIZE);
double mean (const int grades[],int SIZE);
double variance(const int grades[],int SIZE);

void insertionSort(const int grades[], int result[], int SIZE) {
	 int i ,value, index;
	 for(int j=0;j<SIZE;j++) {
	 	result[j] = grades[j];
	 }
	 for(i=1 ; i<SIZE ; i++) {
	  value = result[i];
	  index = i;
	  while ( index > 0 && result[index -1] > value) {
	   result[index] = result[index-1];
	   index = index - 1;
	  }
	 result[index] = value;
	 }
}

void selectionSort(const int grades[], int result[], int SIZE) {
	for(int j=0;j<SIZE;j++){
	result[j] = grades[j];
}
	int temp, small;
	for(int i=0 ; i<SIZE-1 ; i++) {
	 small = i;
	 for(int j=i+1; j<SIZE; j++) {
	  if(result[j] < result[small] )
	  small = j;
	  }
	  
	 temp = result[i];
	 result[i] = result[small];
	 result[small] = temp;
 }
}

int median(const int grades[], int SIZE) {
	double temp = (SIZE + 1) / 2.0;
	int small = ceil(temp) - 1;
	int large = floor(temp) - 1;
	return ((grades[small]+grades[large])/2);
}

double mean (const int grades[],int SIZE) {
	float sum = 0.00;
	for(int i=0;i<SIZE;i++) {
		sum += grades[i];
	}
	return sum / SIZE;
	
}

double variance(const int grades[],int SIZE) {
	double count = 0;
	for(int i=0;i<SIZE;i++)
		count += ((grades[i]-mean(grades, SIZE))*(grades[i]-mean(grades, SIZE)));
	return (count/(SIZE-1));
}


void displayArray(const int grades[], int SIZE) {
 int i;
 for(i=0;i<SIZE;i++)
  cout<<grades[i]<<" ";
 cout<<"\n";
}

int main(){

	const int grades[ ]={96, 0, 77, 82, 87, 8, 40, 20, 80, 43, 91, 18, 26, 15, 17, 83, 58, 55, 14, 85};
	int result1[20]={0};
	int result2[20]={0};
	insertionSort(grades, result1,20);
	displayArray(result1,20);
	selectionSort(grades, result2,20);
	displayArray(result2,20);
	cout << "\nMedian is: " << median(grades, 20) << endl;
	cout << "Mean is: " << mean(grades, 20) << endl;
	cout << "Variance is: " << variance(grades, 20) << endl;
	return 0;
}
