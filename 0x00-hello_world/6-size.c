#include<stdio.h>

/**
 * main - entry point of our program.
 *
 * Description: printing the size of various data types.
 *
 * Return: Always 0 (Success!)
int main(void)
{
	/*Initializing our variables of different data types:*/
	char characterType;
	int integerType;
	long int longType;
	long long int longlongType;
	float floatType;
	/*sizeof to evaluate the size of each variable:*/
	printf("Size of a char: %zu byte\(s\)\n", sizeof(characterType));
	printf("Size of an int: %zu byte\(s\)\n", sizeof(integerType));
	printf("Size of a long int: %zu byte\(s\)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte\(s\)\n", sizeof(longlongType));
	printf("Size of a float: %zu byte\(s\)\n", sizeof(floatType));
	return (0);
}
