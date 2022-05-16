#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prototype
 * @ac: argument 1
 * @av: argument 2
 * Return: 0
 */
int main(int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		Printf("%s", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}
