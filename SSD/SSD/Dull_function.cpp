#include "stdafx.h"
#include <iostream>
#include "Dull_function.h"


int Dull_function()
{
	int std_dev = 0;
	int sum = 0;
	int dev;

	// step 1) find average of all elements in array
	for (int i = 0; i < sizeof Dull_array; ++i)
	{
		sum = sum + Dull_array[i];
		mean = sum / sizeof Dull_array;
		
		// step 2) Find deviation of each element from the mean
		dev = Dull_array[i] - mean;
		
		// step 3) square the deviation values
		std_dev += dev * dev;
	}	

	// step 4) Take average of squared deviation values
	std_dev /= Dull_array;

	// step 5) Take the square root of average squared deviation values
	std_dev = sqrt(std_dev);

	return std_dev;
}



