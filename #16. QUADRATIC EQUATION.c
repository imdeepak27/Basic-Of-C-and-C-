#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    clrscr();
    float a,b,c,D,r1,r2,im;
    printf("\nEnter Coefficient Of Quadratic Equation:");
    scanf("%f%f%f",&a,&b,&c);
    D=(b*b)-(4*a*c);
    if(D>0)
    {
        r1=(-b+sqrt(D))/(2*a);
        r2=(-b-sqrt(D))/(2*a);
        printf("\nTwo Real And Distinct Roots=%.2f and %.2f",r1,r2);
    }
    else if(D==0)
    {
        r1=r2=-b/(2*a);
        printf("\nTwo Real And Equal Roots=%.2f and %.2f",r1,r2);
    }
    else if(D<0)
    {
        r1=r2=-b/(2*a);
        im=sqrt(-D)/(2*a);
        printf("\nTwo Distinct Complex Roots=%.2f+i%.2f and %.2f-i%.2f",r1,r2,im);
    }
    getch();
}