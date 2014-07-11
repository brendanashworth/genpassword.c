// Benchmark for genpassword
#include <stdio.h>
#include <string.h>

#include "../src/genpassword.c"
#include "../deps/bench/bench.c"

int main() {
	BENCHMARK(genpassword, 3)

	char *password = generate_password(15);
	free(password);

	END_BENCHMARK(genpassword)
	BENCHMARK_SUMMARY(genpassword);

	return 0;
}