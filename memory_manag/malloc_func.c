#include <stdlib.h>
#include <stdio.h>

int main()
{
	int *ptr;
	ptr = malloc(10 * sizeof(*ptr));
	if (ptr != NULL)
	{
		*(ptr + 2) = 50;
	}
	printf("3rd elem equals to %d\n", *(ptr + 2));
	return 0;
}
