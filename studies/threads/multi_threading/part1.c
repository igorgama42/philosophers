// Multi-Threading example program in c.

#include <stdio.h>
#include <pthread.h>

void	*computation(void *add);

int	main()
{
	pthread_t thread1;
	pthread_t thread2;
	long value1;
	long value2;

	value1 = 5;
	value2 = 10;
	pthread_create(&thread1, NULL, computation, (void *) &value1); // Runs a function on a separate thread;
	pthread_create(&thread2, NULL, computation, (void *) &value2); //(A pointer to a pthread_t variable, set attributes to the thread, the function to run on the thread, arguments to the function);
	pthread_join(thread1, NULL); //Pause the execution till the operations of the thread being called are finished and it finishes itself;
	pthread_join(thread2, NULL); // (The thread we want to join, A pointer that gets the result from the thread);
	
	return (0);
}

void	*computation(void *add)
{
	long *add_num = (long *) (add);
	printf("add: %ld\n", *add_num);
	return NULL;
}