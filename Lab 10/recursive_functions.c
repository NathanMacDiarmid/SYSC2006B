/* SYSC 2006 Lab 10. */

#include <stdio.h>
#include <math.h>

/* Return x raised to the power n for n >= 0. */
double power(double x, int n)
{
	if (n == 0) {

		return 1;

	}

	else if (n >= 0) {

		return x * power(x, n - 1);
	}

	return printf("n is a negative integer.");

}

/* Return the number of digits in integer n, n >= 0. */
int num_digits(int n)
{
	int sum = 0;
	int remainder = 0;

	if (n < 10) {

		sum++;

	}

	else if (n == 10) {

		sum += 2;

	}

	else if (n > 10) {

		remainder += n / 10;
		sum++;
		sum += num_digits(remainder);

	}

    return sum;
}

/* Return the count of the number of times target occurs in the first 
 * n elements of array a.
 */   
int occurrences(int a[], int n, int target)
{
	if (n == 0) {

		return 0;

	}

	return (target == *a) + occurrences((a + 1), (n - 1), target);

}

/* Challenge exercise: return x raised to the power n for n >= 0. */
double power2(double x, int n)
{
    return -1;
}
