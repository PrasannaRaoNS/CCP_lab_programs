/* Program to find sum of squares of first n odd numbers*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
void sumofsquares(int);
int main()
{
    float a;
    printf("Enter the value of n\n");
    scanf("%f", &a);
    sumofsquares(a);
    getch();
    return 0;
}
void sumofsquares(int n)
{
float sum=0; int i=1;
    while(i<=n){
        if(i%2 != 0) {
            sum=sum+pow(i,2);
        }
        i++;
    }
    printf("The sum of the squares of all odd numbers till %f is = %f ", n,sum);
    getch();
    return 0;
}
