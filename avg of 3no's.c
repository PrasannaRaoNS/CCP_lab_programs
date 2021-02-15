/*This is a program to find average of three no's*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
float a,b,c,avg;
printf("Enter the 1st number\n");
scanf("%f",&a);
printf("Enter the 2nd number\n");
scanf("%f",&b);
printf("Enter the 3rd number\n");
scanf("%f",&c);
avg=(a+b+c)/3;
printf("the average of three numbers = %f",avg);
getch();
return 0;
}
