#include <limits.h>
/**
 * int_to_string - convert an int to string
 *
 * @num: number input
 * @num_str: location for new string
 *
 * Return: the length of number
 */

int int_to_string(int num, char *num_str)
{
	int i, len = 0;
	int copied = num;
	int min = 0;

	if (num < 0)
	{
		num_str[0] = '-';
		len++;
		copied = -num;
		num = -num;
		min = 1;
	}
	while (copied != 0)
	{
		len++;
		copied /= 10;
	}

	for (i = len - 1; i >= min; i--)
	{
		num_str[i] = '0' + (num % 10);
		num /= 10;
	}

	num_str[len] = '\0';

	return (len);
}
