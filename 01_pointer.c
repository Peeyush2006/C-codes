#include <stdio.h>

int main()
{
    int i = 45;
    int *j = &i;
    int k = 18;

    printf("The address of i is %p\n ", &i);

    printf("The address of j is %p\n ", j);

    printf("The address of k is %p\n ", &k);

    printf("The value at address j is %d\n", *(&i));

    printf("The value at address k is %d\n", *(&k));

    return 0;
}