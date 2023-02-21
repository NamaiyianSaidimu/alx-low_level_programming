#include<unistd.h>

/**
 * _putchar - A function that writes the character
 * c to the standard output.
 *
 * Description: c is the character being written
 * to the standard output.
 *
 * Return: 1 on success.
 * on error, -1 will be returned, and errno
 * is set appropriately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
