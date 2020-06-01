#include <stdio.h>
//Number of digits in an integer
void main()
{
    int num, i=0;
    printf("Enter the number :");
    scanf("%d", &num);
    while(num!=0)
    {
        i++;
        num=num/10;
    }
    printf("The number of digits : %d", i);
}