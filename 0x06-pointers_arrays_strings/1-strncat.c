/**
 * _strncat - concatenates two strings
 * @src: parameter to append to dest
 * @dest: parameter to be appended to
 * @n: maximum number bytes usage
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}

	dest += '\0';

	return (dest);
}
