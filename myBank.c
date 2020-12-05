#include "myBank.h"
#include <stdio.h>

float bankAccounts[50][2];

//int doesAccountexist(int accountNumber){
//    int flag=0;
//    //if all accounts are closed
//    if(bankAccounts[accountNumber-900][0]==0){
//        printf("this account does not exists");
//        return flag;
//
//
//    }
//    //if out of Bound
//    else if(accountNumber > 950 || accountNumber <901){
//        printf("this account does not exists");
//        return flag;
//
//    }
//    else{
//        flag=1;
//        return flag;
//    }
//    
//}



//int isDepositLegal(float depositValue){
//    int flag =0;
//
//    if (depositValue<0){
//       printf("Cant deposit nagative number");
//       return  flag;
//    }
//    else if(depositValue==0){
//        printf("Your balance stayed the same");
//        return flag;
//
//    }
//    else{
//        flag=1;
//        return flag;
//    }
//    
//    
//    
//
//
//}


//open account function 01
void openAccount(float depositValue){

    for (int x = 1; x < 51; x++) {
        if (bankAccounts[x][0] == (float)0){
            //open account change to 1 as 1 is open 0 is closed 
            bankAccounts[x][0]= 1;
            //in same row put the after opned put deposit value
            bankAccounts[x][1]= depositValue;
            printf("Your new account number is:%d",x+900);
            printf(" \n Your account balance is:%.2f\n",depositValue);
            break;

        }

        else{ 
            printf("Our bank is full, please try agian later...");
        }
    }


}

//checke balance function 02
void balanceInquiry(int accountNumber){
    float balance;
    if(bankAccounts[accountNumber-900][0]==0){
        printf("this account does not exists");


    }
    //if out of Bound
    else if(accountNumber > 950 || accountNumber <901){
            printf("this account does not exists");
    }        
    else{
            //find the account number -900 because of indexing from 901-950
            printf("Your new account balance is:%f",balance=bankAccounts[accountNumber-900][1]);

             
    }
}

//Deposit function 03
void deposit(int accountNumber,float amount){
    if(accountNumber > 950 || accountNumber <901){
            printf("this account does not exists");

    }

    else if(bankAccounts[accountNumber-900][0]==0){
        printf("this account does not opened");



    }

    //account is good to go 
    else if(accountNumber < 950 || accountNumber > 901){
            float balnce = bankAccounts[accountNumber-900][1];
            float newbalnce = balnce + amount;
            bankAccounts[accountNumber-900][1]=newbalnce;
            printf("Your new account balance is:%f",newbalnce);
            

        
    }

}



//Withdrawl function 04
void withdrawl(int accountNumber,float amount){
    if(accountNumber > 950 || accountNumber <901){
            printf("this account does not exists");

    }

    else if(bankAccounts[accountNumber-900][0]==0){
        printf("this account does not opened");



    }

    //account is good to go 
    else if(accountNumber < 950 || accountNumber > 901){
            float balnce = bankAccounts[accountNumber-900][1];
            float newbalnce = balnce - amount;
            bankAccounts[accountNumber-900][1]=newbalnce;
            printf("Your new account balance is:%f",newbalnce);
            

        
    }
}
//Close function 05
void close(int accountNumber){
    if(accountNumber > 950 || accountNumber <901){
            printf("this account does not exists");

    }

    else if(bankAccounts[accountNumber-900][0]==0){
        printf("this account does not opened");



    }

    //account is good to go 
    else if( 900 < accountNumber &&  accountNumber < 950 ){
            bankAccounts[accountNumber-900][0]=0;
            printf("Your account is now closed!");    
    }

}


//Intrest function 06
void intrestForAll(float rate){


    for (int x = 1; x < 51; x++) {
        if (bankAccounts[x][0] != (float)0){
                bankAccounts[x][1]=bankAccounts[x][1]*(1+rate/100);
            

    
        }
    }
}            
  

void printAll(){
    int accountNumber;
    float accountBalance;
    for (int x = 1; x < 51; x++) {
        if (bankAccounts[x][0] != (float)0){
            printf("Account number: %d  balance %f",accountNumber = bankAccounts[x][0]+900,accountBalance = bankAccounts[x][1]);
        }
    }
} 

void closeAllAccounts(){
    for (int x = 1; x < 51; x++) {
        if (bankAccounts[x][0] == 1){
            bankAccounts[x][1]=0;
            bankAccounts[x][0]=0;
            
    
        }
    }
    printf("All accounts are now closed!");    


}
