/**
 * strlen - find length of a string
 * @s: pointer to the string to chech
 * Return: void
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	i++;

	return (i);
}
