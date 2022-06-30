#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CAPACITY 11

int main(){
    int seat[ CAPACITY ] = {0};
    int class, assigned_first = 1, assigned_economy = 6;

    

    while (assigned_economy + assigned_first < 16){
        int change;
        printf("Please type 1 for \"first class\" \n Please type 2 for \"economy\":>>");
        scanf("%d",&class);
        if (class == 1){
        
            if (assigned_first < 6){
                printf("You have been assigned seat %d (First Class)\n",assigned_first);
                assigned_first += 1;
                
            }
            else{
                if (assigned_economy < 10){
                    printf("First class full!! Would you like to be Placed in Economy class? (1 -> YES 2-> NO)>>");
                    scanf("%d", &change);
                    if (change == 1){
                        printf("You have been assigned seat %d (Economy) \n", assigned_economy);
                        assigned_economy += 1;
                    } else {
                        printf("Next Flight leaves in 3 hours\n");
                    }
                }
                else {
                    printf("Next Flight leaves in 3 hours\n");
                }
            }
        }
        else if (class == 2){ 
            if ( assigned_economy > 5 && assigned_economy <= 10){
                printf("You have been assigned seat %d (Economy) \n", assigned_economy);
                assigned_economy += 1;
            }
            else{
                if (assigned_first < 5){
                    printf("Economy full!! Would you like to be Placed in First class? (1 -> YES 2-> NO)>>");
                    scanf("%d", &change);
                    if (change == 1){
                        printf("You have been assigned seat %d (First Class) \n", assigned_economy);
                        assigned_first += 1;
                    } else {
                        printf("Next Flight leaves in 3 hours\n");
                        
                    }
                }
                else {
                    printf("Next Flight leaves in 3 hours\n");
                }
            }
        }
        else{
            printf("Invalid Choice!!");
        }
    }

    printf("\nAirplane Full\n\n");

    return 0;
}
