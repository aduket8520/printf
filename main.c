#include "main.h"
#include <stdio.h>

/**
 * main - runs the code
 * Return: 0 for good
*/
int main(void)
{
	int i = _printf("Name: %s\nGender: %c\nAge: %d\n", "Titus", 'M', 23);

	printf("%d\n", i);
	return (0);
}
