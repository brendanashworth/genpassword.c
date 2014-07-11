// Testing for genpassword.c
#include <stdio.h>
#include <string.h>

#include "../src/genpassword.c"

#define true 1
#define false 0

// Note: since we use rand(), these will always return the same values.
int main() {
	int passed = true;

	// Seed
	srand(1337);

	// First test
	int length = 10;
	char *password = generate_password(length);
	if (strlen(password) == length) {
		printf("\x1B[32mFirst test passed. \n"); // Print in green
	} else {
		passed = false;
		printf("\x1B[31mFirst test failed. \n"); // Print in red
		printf("Generated password: %s, at length: %i\n", password, length);
	}

	// free memory
	free(password);

	// Second test
	length = 15;
	password = generate_password(length);
	if (strlen(password) == length) {
		printf("\x1B[32mSecond test passed. \n"); // Print in green
	} else {
		passed = false;
		printf("\x1B[31mSecond test failed. \n"); // Print in red
		printf("Generated password: %s, at length: %i\n", password, length);
	}

	// Return to normal color.
	printf("\x1B[0m");

	// free memory
	free(password);

	return !passed;
}
