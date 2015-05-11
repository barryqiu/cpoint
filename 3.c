#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p;
	p = malloc(sizeof(int));
	*p = 1234;
	free(p);
	printf("%d\n", *p);
	return 0;
}

