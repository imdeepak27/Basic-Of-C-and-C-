#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    char c;
    printf("\nEnter A Character:");
    scanf("%c",&c);
    if(c>=65&&c<=90)
    printf("\nEntered Character Is A Alphabet");
    else if(c>=97&&c<=122)
    printf("\nEntered Character Is  A Alphabet");
    else
    printf("\nEntered Character Is Not A Alphabet");
    getch();
}