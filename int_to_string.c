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

	do {
		len++;
		copied /= 10;
	} while (copied != 0);

	if (num < 0)
	{
		len += 1;
		for (i = len - 1; i > 0; i--)
		{
			num_str[i] = '0' - (num % 10);
			num /= 10;
		}
		num_str[i] = '-';
	}
	else if (num > 0)
	{
		for (i = len - 1; i >= 0; i--)
		{
			num_str[i] = '0' + (num % 10);
			num /= 10;
		}
	}
	else
	{
		for (i = len - 1; i >= 0; i--)
		{
			num_str[i] = '0' + (num % 10);
			num /= 10;
		}
	}

	num_str[len] = '\0';

	return (len);
}
