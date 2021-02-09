#include <stdlib.h>
#include <stdio.h>

#include "ft_atoi.c"

int	main(void)
{	
	char src[] = "   223";

	printf("ft_atoi: %i\n", ft_atoi(src));
	printf("atoi: %i\n", atoi(src));

	return (0);
}
