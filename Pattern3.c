#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int i,j,a=5;
    for(i=a;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    getch();
}