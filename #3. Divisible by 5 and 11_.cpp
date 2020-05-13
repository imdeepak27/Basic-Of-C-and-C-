#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int n;
    printf("\nEnter A Number:");
    scanf("%d",&n);
    if((n%5==0)&&(n%11==0))
    printf("\nNumber Is Divisible By 5 And 11");
    else
    printf("\nNumber Is Not Divisible By 5 And 11");
    getch();
}