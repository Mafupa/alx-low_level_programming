#include <stdio.h>

void myConstructor(void) __attribute__((constructor));

/**
 * myConstructor - executed before main
 */
void myConstructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
