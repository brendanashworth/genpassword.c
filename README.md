Genpassword
=====

> Genpassword is a C library for generating unique passwords. Currently, the only available character pool for passwords is [a-zA-Z0-9].

```c
char *generate_password(int length);
```

**Important Note**: It is *necessary* to seed your own random for security reasons. *Never* seed more than once, unless you know what you are doing!

### Example
```c
#include <stdio.h>
#include <time.h>
#include "deps/genpassword.c"

int main() {
	// This is where we seed.
	srand(time(NULL));

	int length = 10;
	char *password = generate_password(length);

	printf("%s\n", password);
	return 0;
}

```