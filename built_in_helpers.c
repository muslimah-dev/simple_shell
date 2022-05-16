#include "main.h"

/**
 * countArgs - counting the number of arguments.
 * @args: arguments.
 * Return: number of strings.
 */
int countArgs(char **args)
{
	register int i = 0;

	while (args[i])
		i++;
	return (i);
}

/**
 * _atoi - string to int.
 * @s: sting
 * Return: -1, if bot valid 
 * 1 if valid
 */
int _atoi(char *s)
{
	register int i = 0;
	unsigned long num = 0;

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + s[i] - '0';
		else
		{
			return (-1);
		}
		i++;
	}
	if (num > INT_MAX)
	{
		return (-1);
	}
	return (num);
}
