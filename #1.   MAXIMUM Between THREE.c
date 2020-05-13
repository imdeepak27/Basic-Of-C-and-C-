//Maximum Between Three Numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int a,b,c,Max;
    printf("\nEnter The Numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        Max=a;
    }
    else if(b>c)
    {
        Max=b;
    }
    else
    {
        Max=c;
    }
    printf("\nMaximum Among Three Numbers=%d",Max);
    getch();
}