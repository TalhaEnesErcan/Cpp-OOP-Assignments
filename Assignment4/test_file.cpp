#include <iostream>
#include <math.h>
#include"MyArray.h"

using namespace std;

int main(){
   // declaring objects with constructors
   double test_array[5] = {1,3,5,7,9};
   double test_array2[5] = {2,4,6,8,10};
   MyArray arr1(4,2);
   MyArray arr2(5,test_array2);
   MyArray arr3(5);
   MyArray arr4(4);
   MyArray arr5(5,test_array);
   
   // utility functions test
   cout << "Array1: "; arr1.printArray();
   cout << "Array1's size is " << arr1.getArraySize() << endl;
   cout << "getArray() for Array2 is " << arr2.getArray() << endl;
   cout << "Array3 and fill function: "; arr3.fill(3); arr3.printArray();
   
   // indexing test
   cout << "Array2[3] is " << arr2.operator[](3) << endl;
   cout << "Array2[1] is " << arr2.operator[](1) << endl;
   
   //assignment test
	cout << "Assignment operator --->  " << arr3.operator=(arr2) << endl;
   
   //comparison
   cout << "Bool: " << arr3.operator==(arr2) << endl;
   cout << "Bool: " << arr3.operator==(arr5) << endl;
   cout << "Bool: " << arr4.operator!=(arr1) << endl;
    
   //math functions
   cout << "\nArray2 is "; arr2.printArray(); cout << "Array5 is "; arr5.printArray(); cout << endl;
   
   cout << "Additive assignment: " << arr2.operator+=(arr5) << endl;
   cout << "Array2 is "; arr2.printArray(); cout << "Array5 is "; arr5.printArray(); cout << endl;
   
   cout << "Subtractive assignment: " << arr2.operator-=(arr5) << endl;
   cout << "\nArray2 is "; arr2.printArray(); cout << "Array5 is "; arr5.printArray(); cout << endl;
   
   cout << "Multiplicative assignment: " << arr2.operator*=(arr5) << endl;
   cout << "\nArray2 is "; arr2.printArray(); cout << "Array5 is "; arr5.printArray(); cout << endl;
   
   cout << "Divisive assignment: " << arr2.operator/=(arr5) << endl;
   cout << "\nArray2 is "; arr2.printArray(); cout << "Array5 is "; arr5.printArray(); cout << endl;
   
   cout << "Power(2) of Array2: " << arr2.operator^(2) << endl;
   
   // ostream and istream
   MyArray arr6(3);
   cin >> arr6;
   cout << "Array6 is ";
   cout << arr6;
   
}
