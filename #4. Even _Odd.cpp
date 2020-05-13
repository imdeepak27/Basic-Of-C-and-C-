#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int n;
    printf("\nEnter A Number :");
    scanf("%d",&n);
    if(n%2==0)
    printf("Even Number");
    else
    printf("Odd Number");
    getch();
}