#include <stdio.h>

int main(){
    int marks;
    int attendance;
    int income; 

    printf("\n Enter marks between 0 and 100 only: ");
    scanf( "\n %d " , & marks );
    printf("\n Enter percantage attendance between 0 and 100 only: ");
    scanf( "\n %d " , & attendance );
    printf("\n Enter family income: ");
    scanf( "\n %d " , & income );

    if (marks < 50 ) {
        printf("\n Not eligible: marks too low ") ; 
    }
    else if( attendance < 75 ) {
        printf("\n Not eligible: attendance too low. ") ; 
    }
            else if ( income > 800000 ) {
                    printf("\n Not eligible: income too high." ) ; 
                }
                else if( marks >= 90 && attendance >= 90 ) {
                        printf("\n Full Scholarship. ") ; 
                    }
                    else if( marks >= 75 && attendance >= 85 ) {
                            printf("\n Half Scholarship ") ; 
                        }
                        else {
                            printf("\n Quarter Scholarship ") ; 
                        }
}