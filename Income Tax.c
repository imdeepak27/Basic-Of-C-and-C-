#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    float Inc,Ta;
    printf("\nEnter Income In Lacs:INR");
    scanf("%f",&Inc);
    if(Inc<=2.5)
    Ta=0;
    else if(Inc>=2.5&&Inc<=5)
    Ta=(Inc-2.5)*5/100;
    else if(Inc>=5&&Inc<=10)
    Ta=(Inc-5)*20/100+0.125;
    else
    Ta=(Inc-10)*30/100+1.125;
    printf("Taxable Amount=INR %.3fLacs \n",Ta);
    getch();
    }