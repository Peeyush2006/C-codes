#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is  %d\n", age);

    if (age > 85)
    {
        printf("You can drive and you are a senior citizen And you should rest and chants the name of god\n");
    }
     else if (age > 40){
        printf("You can drive and you are a senior citizen");
     }
    else if (age > 40)
    {
        printf("You can drive and you are a adult\n");
    }
    else if (age > 18)
    {
        printf("You can drive  \n");
    }
    else
    {
        printf("You cannot drive & GO AND WATCH POGO ");
    }

    return 0;
}