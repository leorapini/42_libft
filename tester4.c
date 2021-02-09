#include <string.h>
#include <stdio.h>

//#include "ft_memcpy.c"
//#include "ft_memccpy.c"
//#include "ft_memchr.c"
//#include "ft_memcmp.c"
//#include "ft_memset.c"

#include "ft_memmove.c"

int	main(void)
{
	char src[] = "newstring"; 
	char dst[] = "oldstring";
	//const char src[] = "this is a super test";
	//const char src2[] = "this ir a super test";
	//char dst[50];
	//char c = 'X';

	printf("dst antes: %s\n", dst);
	//memmove(dst, src, 9);
	ft_memmove(dst, src, 9);
	printf("dst: %s\n", dst); 
	//printf("Memcmp: %i\n", memcmp(src, src2, 10));
	//printf("FT_memcmp: %i\n", ft_memcmp(src, src2, 10)); 
	//printf("%s\n", ft_memchr(src, c, strlen(src) + 1));
	//ft_memccpy(dst, src, c, strlen(src) + 1);
	//ft_memcpy(dst, src, strlen(src) + 1);
	//printf("ft_memccpy: %s\n", dst);
	
}
