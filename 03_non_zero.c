#include <stdio.h>

int main(){
    if(1){
        printf("This is executed\n");
    }
    if (2.1)
    {
         printf("This is also executed\n");
    }
    if ('d')
    {
        printf("This is also executed\n");
    }
    if(0){
        printf("I am zero - I am not executed\n");
    }
    
    return 0;
}