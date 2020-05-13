#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int a,b,c,sum;
    printf("enter three sides of triangle\n=");
    scanf("%d%d%d",&a,&b,&c);
    if(sum=a+b&&sum>c)
    printf("triangle is valid");
    else if(sum=b+c&&sum>a)
    printf("triangle is  valid");
    else if(sum=c+a&&sum>b)
    printf("triangle is valid");
    else
    printf("triangle is invalid");
    getch();
    }