#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    float a,b,c,s,area;
    printf("Enter the length of three sides of triangle\n");
    scanf("%f %f %f",&a,&b,&c);
    s = (a+b+c)/2;
    area =(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle : %f\n", sqrt(area));
     getch();
    return 0;
}
