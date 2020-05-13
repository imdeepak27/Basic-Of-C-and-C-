#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    float A1,A2,A3,S;
    printf("\nEnter Angles Of Triangle:");
    scanf("%f%f%f",&A1,&A2,&A3);
    S=A1+A2+A3;
    if(S==180)
    printf("Triangle Is Valid");
    else
    printf("Triangle Is Invalid");
    getch();
}