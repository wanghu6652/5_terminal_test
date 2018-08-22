#include <stdlib.h>
#include <stdio.h>

#define ONE_K (1024)

int main()
{
	char *some_memory;
	char *scan_ptr;
	int counter = 0;

	some_memory = (char *)malloc(ONE_K);
	if(some_memory == NULL) exit(EXIT_FAILURE);

	scan_ptr = some_memory;
	while(1){
		scan_ptr = '\0';
		scan_ptr++;
		counter++;
		printf("write the end of operator %d time\n", counter);
	}
	exit(EXIT_SUCCESS);
}
