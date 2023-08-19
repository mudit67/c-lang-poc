// C implementation of the approach
#include <math.h>
#include <stdio.h>

#define ull unsigned long long int

// Function to return the binary
// equivalent of decimal value N
int decimalToBinary(int N)
{
	// To store the binary number
	ull B_Number = 0;
	int cnt = 0;
	while (N != 0) {
		int rem = N % 2;
		ull c = pow(10, cnt);
		B_Number += rem * c;
		N /= 2;
		// Count used to store exponent value
		cnt++;
	}
	return B_Number;
}

// Driver code
int main()
{
	int N = 120;
	printf("%u", decimalToBinary(N));
	return 0;
}

// This code is contributed by Sania Kumari Gupta (kriSania804)
