#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Radhe";
    char s1[56] = "Radhe";
    char s2[56] = " bhai is good ";

    // printf("%d", strlen(st));
    // char target[30];
    // strcpy(target, st); // target now contains "Radhe"
    // printf("%s %s", st, target);

    // strcat(s1, s2); // s1 now contains "helloRadhe" <no space in between>
    // printf("%s", s1);

    int a = strcmp("deep", "joke"); // DJ is negative
    printf("%d", a);

    return 0;
}