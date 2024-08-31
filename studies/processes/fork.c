#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void){
	//int id = fork(); // Chld process has the id 0 as default;
	int	id = fork();
	if (id != 0)
		fork();
	printf("Hello World\n");
/* 	if (id == 0)
		printf("Hello from the child process; id: %d\n", id);
	else
		printf("Hello from the main process; id: %d\n", id); */
	return(0);
}