#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int i,j,a;
    for(i=1;i<=5;i++)
    {
        a=15;
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a=a-2;
        }
        printf("\n");
    }
    getch();
}