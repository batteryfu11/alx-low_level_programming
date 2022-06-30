/*
 * File-name: 101-quote.c
 * Author: Shaola Joshua
 */

#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19,
 *		followed by a new line, to standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, ch, sizeof(ch));
	return (1);
}
