#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(void)
{
	char *s;

	while (1)
	{
		s = malloc(INT_MAX);
		s[0] = 'H';
	}
	return 0;
}
