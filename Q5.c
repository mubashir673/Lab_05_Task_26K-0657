#include <stdio.h>

int main() {
    int time , motion , light_level , cooking; 
    int room;

    printf("\n Enter time between 0 and 23 inclusive. ");
    scanf("\n %d" , &time );
    printf("\n Enter motion detected. ");
    scanf("\n %d" , &motion );
    printf("\n Enter light level between 0 and 100 inclusive. ");
    scanf("\n %d" , &light_level );
    printf("\n Are you cooking? 1.Yes 0.No");
    scanf("\n %d", &cooking);

    printf("\n Enter room: \n 1.Living Room \n 2. Bedroom \n 3. Kitchen");
    scanf("\n %d" , &room);

    switch(room){

        case 1: if( time > 6 && time < 18 && motion == 1){
                    printf("\n Day mode: lights ON");
                }
                if( time > 18 && time < 23 && motion == 1){
                    printf("\n Evening mode: Dim lights");
                }
                if( time > 6 && time < 23){
                    printf("\n Night mode: lights OFF");
                }
                if( motion == 0 ){
                    printf("\n Away mode: all OFF");
                }
            break;

        case 2: if( time > 6 && time < 18 && motion == 1){
                    printf("\n Day mode: lights ON");
                }
                if( time > 18 && time < 23 && motion == 1){
                    printf("\n Evening mode: Dim lights");
                }
                if( time > 6 && time < 23){
                    printf("\n Night mode: lights OFF");
                }
                if( motion == 0 ){
                    printf("\n Away mode: all OFF");
                }
            break;

        case 3: if( time > 6 && time < 18 && motion == 1){
                    printf("\n Day mode: lights ON");
                }
                if( time > 18 && time < 23 && motion == 1){
                    printf("\n Evening mode: Dim lights");
                }
                if( time > 6 && time < 23){
                    printf("\n Night mode: lights OFF");
                }
                if( motion == 0 ){
                    printf("\n Away mode: all OFF");
                }
                if( cooking == 1 ){
                    printf("\n Exhaust fan turned on.");
                }
            break;
        
        default: printf("\n Enter correct room number.");
    }



    return 0;
}