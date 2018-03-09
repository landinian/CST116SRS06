#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "Dull_function.h"
using namespace std;



int main()
{
	int array[20] = { 81, 64, 11, 88, 56, 10, 93, 74, 89, 41, 75, 50, 27, 19, 40, 5, 99, 78, 90, 8 };


	double my_results = Dull_function(sizeof(array) / sizeof (array[0], array) 
	double Left_results = double Eide_SSD(sizeof(array) / sizeof(array[0], array)

		if abs(my_results - Left_results) < 0.0001
			cout << "outputs match!";

	return 0;
}
