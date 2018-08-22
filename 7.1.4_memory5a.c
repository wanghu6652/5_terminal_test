#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	char *some_memory = (char *)0;

	printf("A read from null %s\n", some_memory);
	sprintf(some_memory, "Hello world");
	exit(EXIT_SUCCESS);
}
