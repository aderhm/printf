/**
 * update_counter - updates the counter.
 * @n:the return value of function _default,
 * @ctr: the counter,
 *
 * Return: counter.
*/
int update_counter(int n, int ctr)
{
	if (n == -1)
		return (-1);

	if (n == 2)
		ctr++;
	else
		ctr += n - 1;

	return (ctr);
}
