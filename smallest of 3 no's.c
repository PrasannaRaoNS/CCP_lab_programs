#include <stdio.h>
#include <conio.h>
int main()

{
    float n1,n2,n3;
    printf("Enter 3 numbers\n");
    scanf("%f %f %f", &n1, &n2, &n3);
      if(n1<=n2 && n1<=n3)
        printf("The smallest number is %f",n1);
      if(n2<=n1 && n2<=n3)
        printf("The smallest number is f",n2);
      if(n3<=n1 && n3<=n2)
        printf("The smallest number is % f",n3);

      getch();
      return 0;

}
