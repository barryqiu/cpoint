#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int int1;
	double double1;
	char char1;
	double double2;
} Hoge;

int main(void)
{
	Hoge hoge;
	printf("%p\n",&hoge);
	printf("%p\n",&hoge.int1);
	printf("%p\n",&hoge.double1);
	printf("%p\n",&hoge.char1);
	printf("%p\n",&hoge.double2);
	return 0;
}
		
