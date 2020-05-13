#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int Y;
    printf("\nEnter Year:");
    scanf("%d",&Y);
    if(Y%4==0&&Y%100!=0)
    printf("Leap Year");
    else if(Y%400==0)
    printf("Leap Year");
    else
    printf("Common Year");
    getch();
}