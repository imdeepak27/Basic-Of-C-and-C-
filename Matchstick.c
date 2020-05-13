#include<stdio.h>
#include<conio.h> 
int main()
 {
    clrscr(); 
    	int num,i,left;
    printf("\033[0;32m");
    printf("\n#WELCOME TO MATCHSTICK GAME "); 
    printf("\033[0m");
    printf("\033[1;35m");	 
    printf("\n\nHii @DONALD TRUMP 🤗 !!are you ready buddy??");
    printf("\033[0m");
    	printf("\n\nYou have 21 matchstick, pick between 1 to 4 : "); 
    	scanf("%d", &num); 	
    for(i=1;i<5;i++) 	
        { 		
        if(num>4) 		
            { 			
            printf("\nWrong choice!! \n\nChoose from 1 to 4.\n\nTry again!!");
             			break; 
            		} 		
        left=21-5*i; 	
        	printf("\nComputer picked %d matchsticks.\n\n%d matchstick left", 5-num, left); 	
        	if(left==1) 
        		{ 			
            printf(" and it's your turn");
            printf("\033[1;31m");
            printf("\nYOU LOST THE GAME!!!\n\nBETTER LUCK NEXT TIME DUDE!!!! 😁😁😂 ");
            printf("\033[0m");             			break; 	
            	} 
        		printf("\n\nYour turn, pick matchsticks between 1 to 4 : "); 	
        	scanf("%d", &num);
         	} 
    	getch(); 
    	return 0; 
    }