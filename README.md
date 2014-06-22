Genpassword
=====

> Genpassword is a C library for generating unique passwords. Currently, the only available character pool for passwords is [a-zA-Z0-9].

```c
char *generate_password(int length);
```

### Example
```c
#include <stdio.h>
#include "deps/genpassword.c"

int main() {
	int length = 10;
	char *password = generate_password(length);

	printf("%s\n", password);
	return 0;
}

```