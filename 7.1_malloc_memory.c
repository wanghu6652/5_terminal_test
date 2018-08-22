#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

//#define A_MEGABYTE (1024*1024)
//#define PHY_MEM_MEGS 1024
#define ONE_K (1024)

int main()
{
	char *some_memory;
//	size_t size_to_allocate = A_MEGABYTE;
	int size_to_allocate = ONE_K;
//	int megabyte  = A_MEGABYTE;
//	int exit_code = EXIT_FAILURE;
	int megs_obtained = 0;
	int ks_obtained = 0;

//	while(megs_obtained < (PHY_MEM_MEGS * 2)){
//		some_memory = (char *)malloc(megabyte);
	while(1){
		for(ks_obtained = 0; ks_obtained < 1024; ks_obtained++){
			some_memory = (char *)malloc(size_to_allocate);
			if(some_memory == NULL) exit(EXIT_FAILURE);
			sprintf(some_memory, "Hello world");
		}
		megs_obtained++;
		printf("Now allocated %d Megabytes\n", megs_obtained);
//		if(some_memory != NULL){
//			megs_obtained++;
//			sprintf(some_memory, "Hello world");
//			printf("%s", some_memory);
//			printf("%s - now allocated %d Megabytes\n", some_memory, megs_obtained);
//			exit_code = EXIT_SUCCESS;
//		}
//		else{
//			exit(EXIT_FAILURE);
//		}
	}
//	exit(exit_code);
	exit(EXIT_SUCCESS);	
}
