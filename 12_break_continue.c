#include <stdio.h>

int main()
{
    for (int i = 0; i < 11; i++)
    {
        //if (i == 5, i == 7, i == 9)
        if (i == 9)
        {
            break;
          // continue;
        }
        printf("I is %d\n", i);
    }
    printf("The loop is closed!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");

    return 0;
}