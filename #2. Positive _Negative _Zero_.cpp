#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int n;
    printf("Enter Any Number:");
    scanf("%d",&n);
    if(n>0)
    printf("Positive Number");
    else if(n<0)
    printf("Negative Number");
    else
    printf("Zero");
    getch();
    
}