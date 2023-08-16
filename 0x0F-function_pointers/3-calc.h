#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif /* CALC_H */

100-main_opcodes.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - number of bytes
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0
 **/

int main(int argc, char *argv[])
{
	int byte, i;
	int (*code_addr)(int, char **) = main;
	unsigned char code;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < byte; i++)
	{
		code = *(unsigned char *)code_addr;
		printf("%.2x", code);
		code_addr++;
		if (i != byte - 1)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}

