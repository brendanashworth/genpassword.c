// genpassword.h
#define ARR_SIZE(arr) ( sizeof((arr)) / sizeof((arr[0])) )

// Declare functions
char *generate_password(int length);
