/**
 * set_bit - sets a bit at given index to 1
 * @n: pointer number to be changed
 * @index: index of the bit to set to 1
 *
 * Return: 1 (success), -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1UL << index;

	if (index > 63)
		return (-1);

	if ((*n & mask) == 0)
		*n += mask;

	return (1);
}

