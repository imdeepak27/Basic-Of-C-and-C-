#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}