#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    char c;
    printf("\nEnter  A Character:");
    scanf("%c",&c);
    if((c=='a')¦¦(c=='e')¦¦(c=='i')¦¦(c=='o')¦¦(c=='u')¦¦(c=='A')¦¦(c=='E')¦¦(c=='I')¦¦(c=='O')¦¦(c=='U'))
    printf("Vowels");
    else
    printf("Consonent");
    getch();
}