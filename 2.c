#include<stdio.h>

void fun1(int a, int b)
{
	int c,d;
	printf("a:%p,b:%p\n",&a,&b);
	printf("c:%p,d:%p\n", &c,&d);
}

void hello(void)
{
	fprintf(stderr, "hello!\n");
}

void func(void)
{
	void *buf[10];
	static int i;
	for ( i = 0; i < 100; i++)
	{
		buf[i] = hello;

	}
}

int main()
{
//	int a,b;
//	printf("a in main:%p,b in main:%p\n", &a,&b);
//	fun1(a,b);
	int buf[1000];
	func();
	return 0;
}
