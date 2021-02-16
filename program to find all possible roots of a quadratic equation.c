#include <stdio.h>
#include <conio.h>
#include <math.h>
void quadraticroots(float, float, float);
int main(){
    float a,b,c;
    printf("In a Quadratic Equation of form ax^2+bx+c=0, enter the coefficients a,b and c:- \n");
    scanf("%f %f %f",&a,&b,&c);
    quadraticroots(a,b,c);
    getch();
    return 0;
}
void quadraticroots(float a, float b, float c) {
    float discriminant, root1, root2, realpart, imgpart;
    discriminant = pow(b,2) - 4 * a * c;
    // Condition for real and different roots :-
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %f and root2 = %f", root1, root2);
    }
    // Condition for real and equal roots:-
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %f", root1);
    }
    // Condition for non-real roots:-
    else {
        realpart = -b / (2 * a);
        imgpart = sqrt(-discriminant) / (2 * a);
        printf("1st root = (%f + %f i) and 2nd root = (%f - %f i) , where i = (-1)^(0.5)", realpart, imgpart, realpart, imgpart);
    }
    return;
}
