#include <studio.h>
#include <cs50.h>
/*
    Joshua, this is not the code required for population. If you recall the first iteration
    of population should take a startin population size n, and then return the size of n
    after 1 year, using the algorithms provided in the assignment description. Let me
    know if you have questions.
*/
int main(void){

    int userNum = get_int("enter a number: ");
    int sum = userNum + 900;
    int diff = userNum - 5;
    int product = userNum * 7;
    int quotient = userNum / 12;
    int mod = userNum % 99;
    
    
    printf("sum: %i\n",sum);
    printf("difference: %i\n",diff);
    printf("product: %i\n",product);
    printf("quotient: %i\n",quotient);
    printf("mod: %i\n",mod);
}
