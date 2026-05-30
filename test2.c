#include <stdio.h>

void name1(char name[])
{
	printf("my name is %s\n",name);
}


int main ()
{
	char name[10];
	printf("what your name?\n");
	scanf("%s",&name);
	printf("hello world!\n");
	name1(name);
	return 0;
}
