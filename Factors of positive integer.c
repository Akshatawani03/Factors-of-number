#include <stdio.h>
int main()
{
    int number;
    int i;
    printf("\nEnter a Positive integer to find factors:\n");
    scanf("%d",& number);
    printf("The Factors of %d are:\n ", number);
    for(i=1;i<=number;++i)
    {
        if(number%i==0)
         {
           printf("%d",i);
         }
    }
    
    return 0;
    
}