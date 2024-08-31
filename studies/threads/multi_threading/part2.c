// Multi-Threading sum program example in c.

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
	pthread_create(&thread1, NULL, computation, (void *) &value1);
	pthread_join(thread1, NULL);

	pthread_create(&thread2, NULL, computation, (void *) &value2);
	pthread_join(thread2, NULL);
	return (0);
}

void	*computation(void *add)
{
	long sum = 0;
	long *add_num = (long *) (add);
	int	i;
	i = 0;

	while (i < 1000000000)
	{
		sum += *add_num;
		i++;
	}
	printf("add: %ld\n", *add_num);
	return NULL;
}