#include <stdio.h>

/**
 * print_message - Function to print the message before main
 *
 * Description: This function is automatically executed before the main
 * function and prints the required message.
 */
void __attribute__((constructor)) print_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
