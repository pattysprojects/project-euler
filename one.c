/** Problem 1:
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.
**/

#include <stdio.h>

int main() {
	int curr_num;
	int sum = 0;

	// Iterate through all natural numbers below 1000
	for (curr_num = 1; curr_num < 1000; curr_num++) {
		// Check if the number is a multiple of 3 or 5
		if (curr_num % 3 == 0 || curr_num % 5 == 0) {
			// If so, add it to the accumulated sum
			sum = sum + curr_num;
		}
	}

	// Print out the sum
	printf("%d\n", sum);
}