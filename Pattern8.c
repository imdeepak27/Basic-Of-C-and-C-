#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int i,j,s,sp=10;
    for(i=5;i>=1;i--)
    {
        for(s=1;s<=sp;s++)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        sp++;
        printf("\n");
    }
    getch();
}