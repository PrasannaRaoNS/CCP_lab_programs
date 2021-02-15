/*This is a program to convert degree farenheit into degree celsius.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float c,f;
printf("Enter the temperature in degree farenheit\n");
scanf("%f",&f);
c= (f-32)*(5.0/9.0);
printf("Temperature in degree celsius = %f",c);
getch();
return 0;
}

