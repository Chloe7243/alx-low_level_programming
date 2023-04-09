#include <stdio.h>

int get_endianness(void)
{
	int num = 0x12345678;
	char *ptr = (char *)&num;
	
	if (ptr[0] == 78)
		return (1);
	return 0;
}
