#include <stdio.h> 

int main() {
    int age;
    int oxygen;
    int heart_rate;

    printf("\n Enter age: ");
    scanf("\n %d" , & age );
    printf("\n Enter oxygen level in percentage: ");
    scanf("\n %d" , & oxygen );
    printf("\n Enter heart rate in bpm only: ");
    scanf("\n %d" , & heart_rate );

    if( oxygen < 90 ) {
        printf("\n Critical: immediate action"); }
    else if( heart_rate > 130 || heart_rate < 40 ) { 
            printf("\n Crticial: cardiac alert"); }
        else if( age >= 65 && oxygen < 95 ) {
            printf("\n High priority"); }
            else if( age <=5 && heart_rate > 110 ) {
                printf("\n High priority"); }
                else if( oxygen < 97 ) {
                    printf("\n Medium priority"); }
                    else{ 
                        printf("\n Lown priority"); }


}