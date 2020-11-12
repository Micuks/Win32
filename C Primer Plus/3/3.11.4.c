#include <stdio.h>
int main(void)
{
    float f;
    printf("Enter a floating-point value:");
    scanf("%f", &f);
    printf("fixed-point notation: %f\nexponential notation: %e\np notation: %a\n", f, f, f);
    getchar();
    getchar();
    return 0;
}