#include <stdio.h>

int sum(int *, int *);

int sum(int *a, int *b)
{
    *b = 7;
    return (*a + *b);
}

int main()
{
    int i = 18, j = 45;
    // printf("Enter the value of  i :");
    // scanf("%d", &i);
    // printf("Enter the value of  j :");
    // scanf("%d", &i);
    printf("The sum of given two numbers is %d\n", sum(&i, &j));
    printf("The value of b is %d ", j);
    return 0;
}