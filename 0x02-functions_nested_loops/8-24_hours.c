#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int hours = 0, min = 0;

	while (hours < 24)
	{
		while (min < 60)
		{
			if (hours < 10)
			{
				_putchar('0');
				_putchar('0' + hours);
			}
			if (hours >= 10)
			{
				_putchar('0' + (hours / 10));
				_putchar('0' + (hours % 10));
			}
			_putchar(':');

			if (min < 10)
			{
				_putchar('0');
				_putchar('0' + min);
			}
			if (min >= 10)
			{
				_putchar('0' + (min / 10));
				_putchar('0' + (min % 10));
			}
			_putchar('\n');
			min++;
		}
		min = 0;
		hours++;
	}
}
