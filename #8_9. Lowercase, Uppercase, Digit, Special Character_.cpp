#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    char c;
    printf("\nInput The Character:");
    scanf("%c",&c);
    if(c>=65&&c<=90)
    printf("\nEntered Character Is A Uppercase Alphabet");
    else if(c>=97&&c<=122)
    printf("\nEntered Character Is A Lowercase Alphabet");
    else if(c>=48&&c<=57)
    printf("\nEntered Character Is A Number");
else if((c>=0&&c<=47)¦¦(c>=58&&c<=64)(c>=91&&c<=96)¦¦(c>=123&&c<=127))
    printf("\nEntered Character Is A Special Symbol");
    getch();
}