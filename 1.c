#include<stdio.h>
#include<stdlib.h>

static int static_global_var;
int global_var;

void fun1()
{
	int a;
	static int b;
	printf("local var1:%p\n",&a);
	printf("local static:%p\n", &b);
}

void fun2()
{
	int a;
	printf("local var2:%p\n",&a);
}


int main()
{
	int *p;

	printf("fun1:%p\n", fun1);
	printf("fun2:%p\n", fun2);
	printf("string const:%p\n", "abc");
	printf("global:%p\n", &global_var);
	printf("static:%p\n", &static_global_var);
	fun1();
	fun2();
	p = malloc(sizeof(int));
	printf("malloc:%p\n",p);
	return 0;	
}
	
