#include <stdio.h>

int main() {
    int card_status;
    int correct_pin;
    int balance;
    int withdraw;
    int new_balance;

    printf("\n Enter Card Status: 1.Valid 0.Blockded");
    scanf("\n %d" , & card_status);
    printf("\n Is pin correct: 1.Correct 0.Wrong");
    scanf("\n %d" , & correct_pin);
    printf("\n Enter Account balance");
    scanf("\n %d" , & balance);
    printf("\n Enter Amount to withdraw");
    scanf("\n %d" , & withdraw); 

    if( card_status == 0 ) {
        printf("\n Card blocked.Contact bank"); }
    else if( correct_pin == 0 ) {
        printf("\n Incorrect PIN"); }
        else if( withdraw <= 0 ) {
            printf("\n Invalid amount"); }
            else if( withdraw > balance ) {
                printf("\n Insufficient balance"); }
                else if( withdraw > 25000 ) {
                    printf("\n Daily limit exceeded"); }
                    else if( balance-withdraw < 1000 ) {
                        printf("\n Minimum balance must be maintained"); }
                        else {
                            new_balance = balance - withdraw;
                            printf("\n Your new balance is: %d " , new_balance);
                            printf("\n Please collect your cash."); }


                        

}