#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include "Dull_function.h"
#include "Fearow_SSD.h"
using namespace std;



int main()
{
	int Dull_array[20] = { 81, 64, 11, 88, 56, 10, 93, 74, 89, 41, 75, 50, 27, 19, 40, 5, 99, 78, 90, 8 };
	int Eide_SSD[18] = {5, 98, 150, 205, 578, 45, 21, 68, 758, 10, 54, 698, 743, 521, 419, 624, 32, 46};

	double my_result1 = Dull_function(sizeof(Dull_array) / sizeof(Dull_array[0]), Dull_array);	// My array passed into my function
	double my_result2 = Fearow_SSD(sizeof(Dull_array) / sizeof(Dull_array[0]), Dull_array);		// My array passed into left partner's function

	double left_result1	= Dull_function(sizeof(Eide_SSD) / sizeof(Eide_SSD[0]), Eide_SSD);		// Left partner's array passed into my function
	double left_result2 = Fearow_SSD(sizeof(Eide_SSD) / sizeof(Eide_SSD[0]), Eide_SSD);			// Left partner's array passed into left partner's function


	if (abs((my_result1 - my_result2) < 0.000001))
		cout << "Both functions produce identical values from Lillipup's data. \n";

	if (abs((left_result1 - left_result2) < 0.000001))
		cout << "Both functions produce identical values from Fearow's data. \n";

	return 0;
}





