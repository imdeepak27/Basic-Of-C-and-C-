#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int i,j,s,sp=10;
    for(i=10;i>=1;i--)
    {
        for(s=1;s<=sp;s++)
        printf(" ");
        for(j=1;j<=10;j++)
        {
            if(i==1||i==10||j==1||j==10||i==j||j==(10-i+1))
            printf("*");
            else
            printf(" ");
        }
        sp++;
        printf("\n");
    }
    getch();
}