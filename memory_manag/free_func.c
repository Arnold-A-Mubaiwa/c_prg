#include <stdlib.h>
#include <stdio.h>

int main()
{
	int *ptr;
	ptr = malloc(10 * sizeof(*ptr));
	if (ptr != NULL)
		*(ptr + 2) = 50;
	printf("%d\n", *(ptr + 2));

	free(ptr);
	return 0;
}
