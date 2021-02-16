/*This is a program to check whether the entered character is a vowel or consonant using switch case statement*/
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void typeOfAlphabet(char);
int main()
{
    char ch;
    printf("Enter a letter to check whether it is a vowel or consonant\n");
    scanf("%c", &ch);
    typeOfAlphabet(ch);
    getch();
    return 0;
}
void typeOfAlphabet(char n){
    int x;
    if (isalpha(n) != 0) // 0 : False, and any other integer represents True.
    {
        switch (n)
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel.", n);
            break;
        default:
            printf("%c is a consonant", n);
            break;
        }
    }
    else
    {
        printf("Please enter a valid alphabet");
    }
    return;
}
