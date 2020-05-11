#include <cstdio>

int step_function(int x) {
	// Return -1, 0, or 1 based off of value of x
	int result = 0;
	if (x < 0) {
		result = -1;
	}
	else if (x > 0) {
		result = 1;
	}
	return result;
}

int main() {
	// Test 1
	int num1 = 42;
	int result1 = step_function(num1);
	// Tees 2
	int num2 = 0;
	int result2 = step_function(num2);
	// Test 3
	int num3 = -32767;
	int result3 = step_function(num3);
	// Print results with formatted string
	printf("Num1: %d, Step: %d\n", num1, result1);
	printf("Num2: %d, Step: %d\n", num2, result2);
	printf("Num3: %d, Step: %d\n", num3, result3);

	return 0;
}