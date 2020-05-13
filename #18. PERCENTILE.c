#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int P,C,M,B,Com,Per;
    printf("\nEnter Marks Obtain In Physics,Chemistry,Mathematics,Biology,Computer:");
    scanf("%d%d%d%d%d",&P,&C,&M,&B,&Com);
    Per=(P+C+M+B+Com)*100/500;
    if(Per>=90)
    printf("Grade A ");
    else if(Per>=80&&Per<=90)
    printf("Grade B ");
    else if(Per>=70&&Per<=80)
    printf("Grade C ");
    else if(Per>=60&&Per<=70)
    printf("Grade D ");
    else if(Per>=40&&Per<=60)
    printf("Grade E ");
    else if(Per<40)
    printf("Failed");
    getch();
}