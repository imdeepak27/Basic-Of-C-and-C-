#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int i,j,a=5;
    for(i=a;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    getch();
}