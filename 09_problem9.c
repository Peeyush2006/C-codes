// #include <stdio.h>
// 
// int main(){
//     //8! = 1x2x3x4x5x6x7x8 
//     // 6 = 1x2x3x4x5x6
//      int product = 1;
//      int n ;
//     printf("Enter the value whose factorial you want to calculate :: ");
//     scanf("%d", &n);
//     for (int  i = 1; i <= n ; i++)
//     {
//         product *= i;
//     }
//     printf("The factorial of given no. is this %d", product);
//     return 0;
// }




#include <stdio.h>

int main(){// 
    //8! = 1x2x3x4x5x6x7x8 
    // 6 = 1x2x3x4x5x6
    int product = 1;
    int n ;
    printf("Enter the value whose factorial you want to calculate :: ");
    scanf("%d", &n);
    //for (int  i = 1; i <= n ; i++)
    //{
    //    product *= i;
    //}
    int i = 1;
    while (i<= n)
    {
        product *= i ;
        i++ ;
    }
    
    printf("The factorial of %d is  %d",n, product);
    return 0;
}