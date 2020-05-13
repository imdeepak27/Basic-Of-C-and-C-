#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int cd,cm,cy,bd,bm,by,ad,am,ay;
    printf("\nenter the current date=");
    scanf("%d%d%d",&cd,&cm,&cy);
    printf("\nenter the date of birth=");
    scanf("%d%d%d",&bd,&bm,&by);
    ad=cd-bd;
    am=cm-bm;
    ay=cy-bm;
    if((cm<bm)¦¦((bm==cm)&&(cd<bd)))
    {
        ay=cy-by;
        }
    am=(12-bm)+cm;
    {
        ad=ad-1;
        }
    printf("\nyour age is =%d,%d,%d",ad,am,ay);
    getch();
    }