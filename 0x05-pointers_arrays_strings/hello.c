#include <stdio.h>

int main (void)
{
	char s[10] = "12345";

	int len, i;
	char *begin_ptr, *end_ptr, ch;

	len = 0;
	begin_ptr = s;
	end_ptr = s;

	while (*end_ptr++ != '\0')
		len++;

	end_ptr = end_ptr - 2;

	
	for (i = 0; i < len / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;

		end_ptr--;
		begin_ptr++;
	}



	printf("%s",s);
}
