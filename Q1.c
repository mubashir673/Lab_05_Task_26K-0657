#include <stdio.h>

int main() {
    int vehicle;
    int hours;
    int membership;
    int i_fee;
    float discount;
    float f_fee;

    printf( "\n Enter your vehicle type: 1. Bike 2. Car 3. Truck" );
    scanf( "\n %d" , &vehicle );

    if( vehicle == 1 ) {
        printf( "\n Enter parking hours" );
        scanf( "\n %d" , &hours );
        printf( "\n Enter Membership Status: 1.Member 2.Non-Member" );
        scanf( "\n %d" , &membership );

        i_fee = 20 * hours;

    }
    else if( vehicle == 2) {
            printf( "\n Enter parking hours" );
            scanf( "\n %d" , &hours );
            printf( "\n Enter Membership Status: 1.Member 2.Non-Member" );
            scanf( "\n %d" , &membership );

            if( hours <= 2 ) {
                i_fee = 50;
            }
            else {
                i_fee = 50 + 30 * ( hours - 2 );
            }
    }
        else if( vehicle == 3 ){
            printf( "\n Enter parking hours" );
            scanf( "\n %d" , &hours );
            printf( "\n Enter Membership Status: 1.Member 2.Non-Member" );
            scanf( "\n %d" , &membership );

            if( hours <= 3 ) {
                i_fee = 100;

            }
            else {
                i_fee = 100 + 50 * ( hours - 3 );
            }
        
            
        }
            else {
                printf( "\n Invalid Vehicle" );
            }
    if( membership == 1 && i_fee > 200) {
        discount = i_fee * 0.15;
        f_fee = i_fee - discount;
        printf( "\n Total fee : %.2f " , f_fee );

    }
    else {
        printf( "\n Total fee : %.2f " , f_fee );
    }


}