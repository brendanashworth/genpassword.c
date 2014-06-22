// genpassword.c
#include <stdlib.h>
#include "genpassword.h"

char* generate_password(int length) {
	char *pool = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char *password = malloc( sizeof(*password) * (length + 1) );

	int i;
	for (i = 0; i < length; i++) {
		password[i] = pool[rand() % ARR_SIZE(pool)];
	}
	password[length] = '\0';

	return password;
}
