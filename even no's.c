/*program to print even numbers from M to N.*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int i,a,b;
    printf("Enter the range\n");
    scanf("%d%d",&M,&N);

    printf("Even numbers from %d to %d = \n",M,N);
    for(i=M; i<=N; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }
    getch();
    return 0;
}
