#include<stdio.h>

int main()
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
