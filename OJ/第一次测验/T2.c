#include<stdio.h>

int main()
{
	char sex;
	int age;
	double height;

	scanf("%c%d%lf", &sex,&age, &height);
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
	printf("The sex is %c,the age is %d,and the height is %8.6f", sex, age, height);
	return 0;

}