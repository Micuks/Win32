#include<stdio.h>
int main()
{
	char sex;
	int age;
	double height;
	
	scanf_s("%c%d%lf",&sex,1, &age, &height);
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
	printf("The sex is %c, the age is %d, and the height is %f.\n", sex, age, height);
	return 0;
}
