#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "Dull_function.h"
using namespace std;



int main()
{
	int array[20] = { 81, 64, 11, 88, 56, 10, 93, 74, 89, 41, 75, 50, 27, 19, 40, 5, 99, 78, 90, 8 };
	int Eide_SSD[18] = {5, 98, 150, 205, 578, 45, 21, 68, 758, 10, 54, 698, 743, 521, 419, 624, 32, 46};

	double my_results = Dull_function(sizeof(array) / sizeof(array[0]), array);
	
	cout << my_results; 

	return 0;
}
