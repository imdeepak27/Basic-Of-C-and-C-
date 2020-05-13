#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    float BS,HRA,DA,GS;
    GS=0;
    printf("\nEnter Basic Salary If An Employee:INR");
    scanf("%f",&BS);
    if(BS<=10000)
    {
        HRA=(BS*20)/100;
        DA=(BS*80)/100;
        GS=BS+HRA+DA;
    }
    else if(BS<=20000)
    {
        HRA=(BS*25)/100;
        DA=(BS*90)/100;
        GS=BS+HRA+DA;
    }
    else if(BS>20000)
    {
        HRA=(BS*30)/100;
        DA=(BS*95)/100;
        GS=BS+HRA+DA;
    }
    printf("\nGross Salary Of The Employee=INR%.2f",GS);
    getch();
    
}