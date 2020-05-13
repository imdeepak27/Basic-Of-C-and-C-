#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    float U,A,Surcharge,NA;
    A=0;
    printf("\nEnter Total Units Consumed By Customer:");
    scanf("%f",&U);
    if(U<=50)
    A=U*0.5;
    else if(U>=50&&U<=100)
    A=(U-50*0.75)+25;
    else if(U>=100&&U<=250)
    A=(U-150)*1.20+100;
    else if(U>=250)
    A=(U-250)*1.50+220;
    Surcharge=(A*20)/100;
    NA=A+Surcharge;
    printf("\nENERGY BILL = INR%.2f",NA);
    getch();
    }