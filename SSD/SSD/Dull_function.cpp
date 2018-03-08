#include "stdafx.h"
#include <iostream>
#include "Dull_function.h"


int Dull_function()
{
	int Dull_array[20] = { 81, 64, 11, 88, 56, 10, 93, 74, 89, 41, 75, 50, 27, 19, 40, 5, 99, 78, 90, 8 };
	int std_dev = 0;
	int sum = 0;
	int dev;
	int mean;

	// step 1) find average of all elements in array
	for (int i = 0; i < sizeof Dull_array; ++i)
	{
		sum = sum + Dull_array[i];
		mean = sum / sizeof Dull_array;

		// step 2) Find deviation of each element from the mean
		dev = Dull_array[i] - mean;

		// step 3) square the deviation values
		std_dev += dev * dev;


		// step 4) Take average of squared deviation values
		std_dev /= sizeof Dull_array;

		// step 5) Take the square root of average squared deviation values
		std_dev = sqrt(std_dev);
	}
	return std_dev;
}



