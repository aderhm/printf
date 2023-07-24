/**
 * increment_format - increments the input format.
 * @n:the return value of function _default,
 * @format:the first input in _printf,
 *
 * Return: A pointer to format.
*/
const char *increment_format(int n, const char *format)
{
	if (n == 1)
		format++;
	else if (n == 2)
	{
		format++;
	}
	else
	{
		format += _strlen((char *)format) - 1;
	}
	return (format);
}
