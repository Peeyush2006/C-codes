#include <stdio.h>

void change_to_ten_times(int);
void change_to_ten_times(int a)
{
    a = a * 10;
}

int main()
{
    int a = 18;
    printf("The value of a is %d\n", a);
    change_to_ten_times(a);
    printf("The value of a is %d\n", a);
    return 0;
}