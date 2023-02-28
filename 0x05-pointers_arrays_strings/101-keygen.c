#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - password generator
 *
 * Return: Always 0(Success!)
 */
int main(void)
{
	int size, i, rand_num;
	char password[15];
	char numbers[] = "0123456789";
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "@!$#&^*";


	printf("How many characters would you prefer?");
	scanf("%d", &size);

	srand((unsigned int)(time(NULL)));

	for (i = 0; i < size; i++)
	{
		rand_num = rand()%4;
		if (rand_num == 0)
		{
			rand_num = rand()%10;
			password[i] = numbers[rand_num];
		}
		else if (rand_num == 1)
		{
			rand_num = rand()%26;
			password[i] = lowercase[rand_num];
		}
		else if (rand_num == 2)
		{
			rand_num = rand()%26;
			password[i] = uppercase[rand_num];
		}
		else
		{
			rand_num = rand()%8;
			password[i] = symbols[rand_num];
		}
	}
	for (i = 0; i < size; i++)
	{
		printf("%c", password[i]);
	}
	return (0);
}
