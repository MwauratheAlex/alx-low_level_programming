#include "main.h"

/**
 * infinite_add - adds two numbers
 *
 * @n1: number
 *
 * @n2: number
 *
 * @r: the buffer that the function will use to store the result
 *
 * @size_r: the buffer size
 *
 * You can assume that you will always get positive numbers, or 0
 * You can assume that there will be only digits in the strings n1 and n2
 * n1 and n2 will never be empty
 *
 * Return: pointer to the result
 *
 * If the result can not be stored in r return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum = 0;
	int carry = 0;
	int i;
	int len_n1 = strlen(n1) - 1;
	int len_n2 = strlen(n2) - 1;

	size_r--;
	if (len_n1 >= size_r || len_n2 >= size_r)
		return (0);

	r[size_r] = '\0';
	size_r--;

	for (i = size_r; i >= 0; i--)
	{
		if (len_n1 < 0 && len_n2 < 0)
			sum = carry;
		else if (len_n1 < 0)
			sum = (n2[len_n2] - '0') + carry;
		else if (len_n2 < 0)
			sum = (n1[len_n1] - '0') + carry;
		else
			sum = (n1[len_n1] - '0') + (n2[len_n2] - '0') + carry;

		if (sum >= 10)
		{
			carry = sum / 10;
			sum -= 10;
		}
		else
			carry = 0;

		r[i] = sum + '0';
		len_n1--;
		len_n2--;

	}
	if (carry != 0)
		return (0);
	return (r);
}
