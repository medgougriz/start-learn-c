#include <stdio.h>
#include <string.h>

char* testfunction(int age, char licence[5])
{
	if(age>=18 && strcmp(licence,"yes")==0){
		return "you can drive";
	}else{
		return "you cannot drive";
	}
}

int main()
{
	int age;
	char licence[5];
	printf("what is your age ?\nmy age is ");
	scanf("%d",&age);
	printf("do you have licence ?\n");
	scanf("%s",licence);
	printf("%s",testfunction(age,licence));
	return 0;
}
