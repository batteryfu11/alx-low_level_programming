#include "main.h"

/**
 * leet - transform to 1337
 * @str: String operand
 *
 * Return: str transformed
 */
char *leet(char *str)
{
	int i, ii;
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (ii = 0; ii < 5; ii++)
		{
			if (str[i] == s1[ii] || str[i] == S1[ii])
			{
				str[i] = s2[ii];
				break;
			}
		}
	}
	return (str);
}
