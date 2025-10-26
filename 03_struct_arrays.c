#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[16];
};

int main()
{
    struct employee facebook[100];
    facebook[0].code = 1000;
    facebook[1].code = 87;
    struct employee radhe = {100, 73, "Radhe"};
    printf("%d %.2f %s", radhe.code, radhe.salary, radhe.name);

    return 0;
}