#include "stdafx.h"
#include <iostream>
#include "Dull_function.h"



double Dull_function(const size_t n, const int array[])
{
	
	
	int sum = 0;
	int mean;
	double dev;
	double std_dev = 0;

	// step 1) find average of all elements in array
	for (int i = 0; i < sizeof n; ++i)
	{
		sum = sum + array[i];
		mean = sum / sizeof n;

		// step 2) Find deviation of each element from the mean
		dev = array[i] - mean;

		// step 3) square the deviation values
		std_dev += dev * dev;


		// step 4) Take average of squared deviation values
		std_dev /= sizeof n;

		// step 5) Take the square root of average squared deviation values
		std_dev = sqrt(std_dev);
	}
	return std_dev;
}



