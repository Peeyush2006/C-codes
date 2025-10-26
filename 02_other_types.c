#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i; // j is a pointer pointing to i (j is a character pointer)

    float k = 5.232;
    float *k1 = &k;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of k1 is %p\n", &k);
    printf("The value at address j is %d\n", *(&i));
    printf("The value at address k is %f\n", *(&k));
    printf("%f",k1);

    return 0;
}