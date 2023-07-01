#include "lists.h"
/**
 * print_message_before_main - display message before main.
 *
 */
void __attribute__((constructor)) print_message_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
