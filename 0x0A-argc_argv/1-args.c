#include <stdio.h>
#include "main.h"

/*
 *Write a program that prints the number of arguments passed into it.
 *Your program should print a number, followed by a new line.
 *@argc: mnumber of arguments.
 *@argv: array of arguments (vector of all the arguments)
 *retun: always (0) whenever it is successful.
*/

int main(int argc, char *argv[])
{
	(void) argv,
	printf("%d\n", argc - 1);
	return (0);
}
