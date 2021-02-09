#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

//#include "ft_bzero.c"
//#include "ft_calloc.c"
#include "ft_strdup.c"

int	main(void)
{
	char s1[] = "this is a test";
	char *string = ft_strdup(s1);
	
	printf("%s\n", string);

	/*
	int count;
	int number1, number2, number3;
	int *data;
	int i;	

	count = 3;

	//data = (int *)calloc(count, sizeof(int));
	data = (int *)ft_calloc(count, sizeof(int));	

	number1 = 11;
	number2 = 22;
	number3 = 33;

	data[0] = number1;
	data[1] = number2;
	data[2] = number3;

	i = 0;
	while (i < count)
	{
		printf("Number: %d\n", data[i]);
		i++;
	}
	free(data);
	*/

	/* bzero
	char s[] = "ulala";

	printf("%s\n", s);
	ft_bzero(s, 1);
	printf("%s\n", s);
	*/
	return (0);
}
