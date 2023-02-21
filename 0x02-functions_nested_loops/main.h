#include<unistd.h>
 
/**
 * _putchar: A function that prints a character
 * to the standard output.
 *
 * Description: The character c is what will be
 * printed to the stdout.
 *
 * Return: 1 on success.
 * On error, -1 will be returned and errno will be set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
