#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}