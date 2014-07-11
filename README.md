Genpassword
=====
[![Build Status](https://travis-ci.org/boboman13/genpassword.c.svg?branch=master)](https://travis-ci.org/boboman13/genpassword.c)

> Genpassword is a C library for generating unique passwords. Currently, the only available character pool for passwords is [a-zA-Z0-9].

```c
char *generate_password(int length);
```

**Important Note**: It is *necessary* to seed your own random for security reasons. *Never* seed more than once, unless you know what you are doing!

### Installation
Installation of this library is accomplished via CLib.
```bash
$ clib install boboman13/genpassword.c
```
This will give you a `deps` folder with the library.

### Example
```c
#include <stdio.h>
#include <time.h>
#include "deps/genpassword.c/genpassword.c"

int main() {
	// This is where we seed.
	srand(time(NULL));

	int length = 10;
	char *password = generate_password(length);

	printf("%s\n", password);

	// We use malloc(), so you must free().
	free(password);
	return 0;
}

```