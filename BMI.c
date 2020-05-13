#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    float W,H,BMI;
    printf("\nenter weight in kilogram=");
    scanf("%f",&W);
    printf("\nenter height in meter=");
    scanf("%f",&H);
    BMI=W/(H*H);
    printf("\033[1;31m");
    printf("\nBMI=W/(H*H)");
    printf("\033[0m");
    printf("\033[0;35m");
    printf("\nBody Mass Index=%.2f",BMI);
    printf("\033[0m");
    printf("\033[0;32m");
    if(BMI<15)
    printf("\nstarvation");
    else if(BMI>=15.1&&BMI<=17.5)
    printf("\nanorexic");
    else if(BMI>=17.6&&BMI<=18.5)
    printf("\nunderweight");
    else if(BMI>=18.6&&BMI<=24.9)
    printf("\nideal");
    else if(BMI>=25&&BMI<=29.9)
    printf("\noverweight");
    else if(BMI>=30&&BMI<=30.9)
    printf("\nobese");
    else
    {
        if(BMI>=40)
    printf("\nmorbidly obese");
        }
    getch();
    }