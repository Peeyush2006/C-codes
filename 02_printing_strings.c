#include <stdio.h>

int main()
{
    // char str[] = {'R', 'A', 'D', 'H', 'E', '\0'};
    char str[] = {"RADHE"};
    for (int i = 0; i < 5; i++)
    {
        printf("The characters in this string is %c\n", str[i]);
    }

    return 0;
}