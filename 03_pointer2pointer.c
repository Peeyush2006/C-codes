#include <stdio.h>

int main()
{
    int a = 18;
    int *b = &a;
    int **c = &b;

    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *b);
    printf("The value of a is %d\n", *(&a));
    printf("The value of a is %d\n", **(&b));
    return 0;
}