/** Problem 5:
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
**/

/** Approach: 
Since the least common multiple (LCM) of two integers a,b is their product divided by their greatest common divisor (GCD),
to find the LCM of the numbers 1 through 20, we can iteratively find the LCM of pairs of numbers up to 20 by taking products
of pairs of numbers and dividing by their respective GCDs **/

#include <stdio.h>
#include <stdint.h>

int64_t find_GCD(int64_t a, int64_t b);

int main() {
	int64_t next_num, curr_LCM, currNum = 1;
	next_num = currNum + 1;

	// Find the LCM of pairs of numbers up and including 20
	while (next_num <= 20) {
		curr_LCM = (currNum * next_num) / find_GCD(currNum, next_num);
		currNum = curr_LCM;
		next_num = next_num + 1;
	}

	// Print out the LCM of 1 through 20
	printf("%d\n", curr_LCM);
}

// Using the extended Euclidean algorithm to find the greatest common divisor of two integers

int64_t find_GCD(int64_t a, int64_t b) {
	int64_t max, min, rmd;

	if (a >= b) {
		max = a;
		min = b;
	} else {
		max = b;
		min = a;
	}
	rmd = max % min;

	while (rmd != 0) {
		max = min;
		min = rmd;
		rmd = max % min;
	}
	return min;
}