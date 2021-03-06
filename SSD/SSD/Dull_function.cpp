#include "stdafx.h"
#include <iostream>
#include "Dull_function.h"


double Dull_function(const size_t n, const int array[])
{
	int sum = 0;
	double mean;
	double std_dev = 0;

	// step 1) find average of all elements in array
	for (size_t i = 0; i < n; ++i)
	{
		sum += array[i];
	}
		mean = (sum*1.0) / (n);

		// step 2) Find deviation of each element from the mean
	    // step 3) square the deviation values
		// step 4) Summ of squared deviation values
		// step 4) Take average of squared deviation values by dividing the sum from step four by the number of array elements - 1
		// step 5) Take the square root of average squared deviation values
		
		for (size_t i = 0; i < n; i++)
			std_dev += pow(array[i] - mean, 2);

		return sqrt(std_dev / (n-1));
}



