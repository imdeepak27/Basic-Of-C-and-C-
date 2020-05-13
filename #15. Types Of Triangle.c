#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int a,b,c;
    printf("\nEnter Sides Of Triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
    printf("Equilateral Triangle");
    else if((a==b&&a!=c)¦¦(b==c&&b!=a))
    printf("Isosceles Triangle");
    else
    printf("Scalene Triangle");
    getch();
}