#include<stdio.h>

int main()
{

	int poge = 5;
	int * p_poge = &poge;
	printf("%p\n",p_poge);
	p_poge++;
	printf("%p\n",p_poge);
	printf("%p\n",p_poge+3);

	int a[5] = {1,2,3,4,5};
	printf("%d\n", 3[a]);
	
	return 0;
}
