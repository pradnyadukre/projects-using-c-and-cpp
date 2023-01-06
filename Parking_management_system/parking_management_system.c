#include<stdio.h>
#include<stdlib.h>
void riksha();
void bus();
void cycle();
void show_details();
int menu();
void reset();



int nob=0, noc=0,nor=0;
int count=0,amount=0;

void main(){
char ch;
    do{
        
    printf("\n enter your choice");
    printf("\n enter 1 for cycle");
    printf("\n enter 2 for riksha");
    printf("\n enter 3 for bus");
    printf("\n enter 4 for details");
    printf("\n enter 5 for reset");
    printf("\n enter 6 for exit\n \n \n ");
    

    printf("\n Enter your choice.\n "); 
     scanf("%d",&ch);

   
   
    
    switch(ch){
        case 1:
        cycle();
        break;

        case 2:
        riksha();
        break;
        

        case 3:
        bus();
        break;
        
        case 4:
        show_details();
        break;
        

        case 5:
        reset();
        break;
        
        case 6:
        exit(0);
        

        default:
        printf(" enter valid choise\n");
    }
    getchar();
     printf("Do you want to continue?\n");
    scanf("%c",&ch);
    }
    while(ch == 'y'||ch == 'Y');
   // getchar();
   
}

void bus(){
    printf("\n your entry is successful.\n \n \n ");
    nob++;
    count++;
    amount = amount+100;
}
void riksha(){
      printf("\n your entry is successful.\n \n \n ");
    nor++;
    count++;
    amount  = amount+50;
}

void cycle(){
      printf("\n your entry is successful.\n \n \n ");
    noc++;
    count++;
    amount=amount+20;
}
void reset(){
    nob=0;
     noc=0;
     nor=0;
     count=0;
     amount=0;
}
void show_details(){
    printf("\n \n \n no of bus: %d", nob);
     printf("\n no of riksha:%d", nor);
      printf("\n no of cycle: %d", noc);
       printf("\n total no of vehicals: %d",count);
       printf("\n total amount  %d\n \n ",amount);
}
int menu(){
  
   int num=0;
    
    printf("\n enter your choice");
    printf("\n enter 1 for cycle");
    printf("\n enter 2 for riksha");
    printf("\n enter 3 for bus");
    printf("\n enter 4 for details");
    printf("\n enter 5 for reset");
    printf("\n enter 6 for exit\n \n \n ");
    printf("\n Enter your choice.\n ");
    scanf("%d",&num);
    return num;
    
}