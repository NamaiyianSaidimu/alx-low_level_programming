#include "main.h"

/**
 * print_alphabet: A function that prints the
 * alphabet.
 *
 * Description: The alphabet should be in lowercase
 * and followed by a new line.
 *
 * Return: no value (void).
 */
void print_alphabet(void){
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++){
		_putchar(alpha);
	}
	_putchar('\n');
}

/**
 * main - our program's entry point.
 *
 * Description: We call the function print_alphabet()
 *
 * Return: 0(Success!)
 */
int main(void){
	print_alphabet();
	return (0);
}
