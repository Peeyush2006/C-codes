#include <stdio.h>

void swap(int *a, int *b);
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 45;
    int b = 48;
    swap(&a, &b);
    printf("The value at a is %d and the value ab b is %d", a, b);
    return 0;
}