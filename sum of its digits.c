/*Program to enter a number and calculate the sum of its digits*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, sum=0;
    printf("Enter number to find sum of its digit\n");
    scanf("%d",&num);
        while(num!=0)
    {
        sum += num % 10;
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);
    getch();
    return 0;
}
