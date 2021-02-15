/*This is a program to find the distance between two points*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
float x1,x2,y1,y2,d;
printf("enter the value of x1\n");
scanf("%f",&x1);
printf("enter the value of x2\n");
scanf("%f",&x2);
printf("enter the value of y1\n");
scanf("%f",&y1);
printf("enter the value of y2\n");
scanf("%f",&y2);
d=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
printf("Distance between the points = %f",sqrt(d));
getch();
return 0;
}
