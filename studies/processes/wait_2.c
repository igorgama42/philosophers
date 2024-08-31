#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stdio.h>
#include <sys/wait.h>

int	main(void){
	int	id = fork();
	int	n;
	int	i;

	if (id == 0)
		n = 1;
	else
		n = 6;
	i = n;
	if (id != 0)
		wait(NULL);
	while (i < n + 5)
	{
		printf("%d ", i);
		fflush(stdout);
		i++;
	} 
	if (id != 0)
		printf("\n");
	return (0);
}