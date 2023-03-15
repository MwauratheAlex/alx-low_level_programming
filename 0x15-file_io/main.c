#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	int o, r, w;
	char *buffer;
	size_t count = 10;

	buffer = malloc(sizeof(char) * count);
	if (buffer == NULL)
		exit(98);

	o = open("file.txt", O_RDONLY);
	r = read(o, buffer, count);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
		exit(98);

	close (o);
	free(buffer);

	return (0);
}
