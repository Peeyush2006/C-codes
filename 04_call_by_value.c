#include <stdio.h>
int sum(int, int);
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int i, j;
    printf("Enter the value of  i :");
    scanf("%d", &i);
    printf("Enter the value of  j :");
    scanf("%d", &i);
    printf("The sum of given two numbers is %d", sum(i, j));
    return 0;
}