#include <stdio.h>
#include <stdbool.h>

int main()
{
	int i;
	char ar[6] = {'/', '-', '|', '\\', '|' };
	while(true)
	{
		for (i = 0; i < 5; ++i)
			printf ("%c\r", ar[i]);
	}
	return 0;
}
