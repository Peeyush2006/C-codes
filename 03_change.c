#include <stdio.h>

int change(int a);

int change(int a)
{
    a = 18; // misnomer

    return 0;
}

int main()
{

    int b = 45;
    change(b); // The value of b remains 45
    printf("b is %d\n", b);

    return 0;
}