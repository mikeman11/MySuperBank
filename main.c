#include <stdio.h>
#include "myBank.h"
#include <stdbool.h>


int main(void){


    char userInput;
    bool quit = false;
    while(!quit){
        
         

 


        printf("What you want to do? : ");//list of commands
        //printf("\n list of commands");
    

        scanf("%c", &userInput);
        switch(userInput)
        {
        case 'E':
        {   printf("We are closing all the accounts please wait");
            quit=true;
            break;
        }    
        
        case 'O':
        { 
            float depositValue=0.0;
            printf("How much would you like to deposit?:");
            scanf("%f", &depositValue);
            openAccount(depositValue);
            break;
        }    

        case 'B':
        { 
            int accountNumber=0;
            printf("What is your account number");
            scanf("%d", &accountNumber);
            balanceInquiry(accountNumber);
            break;

        }    
        case 'D':
        { 
            int accountNumber=0;
            float depositValue=0.0;
            printf("What is your account number");
            scanf("%d", &accountNumber);
            printf("what is the amount you want to deposit?");
            scanf("%f", &depositValue);
            deposit(accountNumber,depositValue);
            break;
        }    

        case 'W':
        { 
            int accountNumber=0;
            float depositValue=0.0;
            printf("What is your account number");
            scanf("%d", &accountNumber);
            printf("what is the amount you want to Withdrawl?");
            scanf("%f", &depositValue);
            withdrawl(accountNumber,depositValue);
            break;
        }    
            

        case 'C':
        { 
            int accountNumber=0;
            printf("What is your account number");
            scanf("%d", &accountNumber);
            close(accountNumber);
            break;
        }    


        case 'I':
        { 
            float rate;
            printf("What is the rate of intrest?");
            scanf("%f", &rate);
            intrestForAll(rate);
            break;
        }    

        case 'P':
        { 
            printAll();
            break;
        }    

        }


        return 0;
    }
}





