#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    float cp,sp,A;
    printf("Enter Cost Price=INR");
    scanf("%f",&cp);
    printf("Enter Selling Price=INR");
    scanf("%f",&sp);
    if(sp>cp)
    {
        A=sp-cp;
        printf("Profit=INR%.2f",A);
    }
    else if(cp>sp)
    {
        A=cp-sp;
        printf("Loss=INR%.2f",A);
    }
    else
    printf("Neither Profit Nor Gain");
    getch();
}