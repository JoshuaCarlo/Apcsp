#include <stdio.h>
#include <cs50.h>

int main(void){
    
    float change;
    int coins = 0;
    
    //this do while reprompts the user and checks if their float
    //matches or does not match the minimum required number tht being if it is less than 0
    do{
        
        change = get_float("Change Owed: ");
    }
    while(change <= 0);
    
    change = change * 100;
    
    //this one checks if a quarter is viable
    do{
        change = change - 25;
        coins = coins + 1;
        
    }
    while(change - 25 >= 0);
    
    //this one is for dimes
    do{
        change = change - 10;
        coins = coins + 1;
    }
    while(change - 10 >= 0);
    
    //this one is for 5 cents
    do{
        change = change - 5;
        coins = coins + 1;
    }
    while(change - 5 >= 0);
    
    //and finally, for pennies
    do{
        change = change - 1;
        coins = coins + 1;
        
    }
    while(change - 1 >= 0);

    //the results and amount of coins required is then printed out
    printf("change: %f\n", change);
    printf("coins: %i\n", coins);
}
