#include <stdio.h>
//Sum of digits of a number
void main()
{
    int num, r, sum=0;
    printf("Enter a number :");
    scanf("%d", &num);
    while(num)
    {
        r=num%10;
        num=num/10;
        sum+=r;
    }
    printf("The sum of the digits : %d", sum);
}