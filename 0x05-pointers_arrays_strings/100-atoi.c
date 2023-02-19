/**
 * _atoi - convert a string to an integer
 *
 * @s: string
 *
 * Return: converted value
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int i = 0;
	char *str = s;
	int sign = 1;

	while (str[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');

			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}

		i++;
	}

	return (num * sign);
}
