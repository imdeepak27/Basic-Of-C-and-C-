#include<stdio.h>
#include<conio.h>
int main()
{
    int ch,ch1;
    float a,l,b,h,r,A,V;
    printf("\033[0;34m");
    printf("\n3D MENSURATION");
    printf("\033[0m");
    printf("\033[0;35m");
    printf("\nEnter Shape From Choices \n1.Cube \n2.Cuboid \n3.Cylinder \n4.Cone \n5.Sphere \n6.Hemisphere");
    scanf("%d",&ch);
    printf("\033[0m");
    printf("\033[0;36m");
    printf("\nWhat you want to calculate \n1.CSA \n2.TSA \n3.VOLUME");
    scanf("%d",&ch1);
    printf("\033[0m");
    switch(ch)
    {
        case 1:
        printf("\nEnter side of cube=");
        scanf("%f",&a);
        switch(ch1)
        {
            case 1:A=4*a*a;
            printf("\033[1;33m");
            printf("\nCSA=%.2f",A);
            break;
            case 2:A=6*a*a;
            printf("\033[1;33m");
            printf("\nTSA=%.2f",A);
            break;
            case 3:V=a*a*a;
            printf("\033[1;33m");
            printf("\nVolume=%.2f",V);
            break;
            default:
            printf("☠️☠️Error😋😋");
            }
        break;
        case 2:
        printf("\nEnter lenght ,breadth and height of cuboid=");
        scanf("%f%f%f",&l,&b,&h);
        switch(ch1)
        {
            case 1:
            A=2*(l+b)*h;
            printf("\033[1;33m");
            printf("\nCSA=%.2f",A);
            break;
            case 2:
            A=2*l*b+2*b*h+2*h*l;
            printf("\033[1;33m");
            printf("\nTSA=%.2f",A);
            break;
            case 3:
            V=l*b*h;
            printf("\033[1;33m");
            printf("\nVolume=%.2f",V);
            break;
            default:
            printf("☠️☠️Error😋😋");
            }
        break;
        case 3:
        printf("\nEnter radius and height of cylinder=");
        scanf("%f%f",&r,&h);
        switch(ch1)
        {
            case 1:
            A=2*3.14*r*h;
            printf("\033[1;33m");
            printf("\nCSA=%.2f",A);
            break;
            case 2:
            A=3.14*r*(r+h);
            printf("\033[1;33m");
            printf("\nTSA=%.2f",A);
            break;
            case 3:
            V=3.14*r*r*h;
            printf("\033[1;33m");
            printf("\nVolume=%.2f",V);
            break;
            default:
            printf("☠️☠️Error😋😋");
            }
        break;
        case 4:
        printf("\nEnter radius,height and slant height of cone=");
        scanf("%f%f%f",&r,&h,&l);
        switch(ch1)
        {
            case 1:
            A=3.14*r*l;
            printf("\033[1;33m");
            printf("\nCSA=%.2f",A);
            break;
            case 2:
            A=3.14*r*(r+l);
            printf("\033[1;33m");
            printf("\nTSA=%.2f",A);
            break;
            case 3:
            V=(3.14*r*r*h)/3;
            printf("\033[1;33m");
            printf("\nVolume=%.2f",V);
            break;
            default:
            printf("☠️☠️Error😋😋");
            }
        break;
        case 5:
        printf("\nEnter radius of sphere=");
        scanf("%f",&r);
        switch(ch1)
        {
            case 1:
            printf("\033[1;33m");
            printf("\nSphere does not have CSA  🤔🤔  ");
            break;
            case 2:
            A=4*3.14*r*r;
            printf("\033[1;33m");
            printf("\nTSA=%.2f",A);
            break;
            case 3:
            V=(3.14*4*r*r*r)/3;
            printf("\033[1;33m");
            printf("\nVolume=%.2f",V);
            break;
            default:
            printf("☠️☠️Error😋😋");
            }
        break;
        case 6:
        printf("\nEnter radius of hemisphere=");
        scanf("%f",&r);
        switch(ch1)
        {
            case 1:
            A=2*3.14*r*r;
            printf("\033[1;33m");
            printf("\nCSA=%.2f",A);
            break;
            case 2:
            A=3*3.14*r*r;
            printf("\033[1;33m");
            printf("\nTSA=%.2f",A);
            break;
            case 3:
            V=(2*3.14*r*r*r)/3;
            printf("\033[1;33m");
            printf("\nVolume=%.2f",V);
            break;
            default:
            printf("☠️☠️Error😋😋");
            }
            getch();
        }
    getch();
    }
               