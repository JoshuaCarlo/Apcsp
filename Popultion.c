#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int u = get_int("enter a number: ");
 
    int b = u / 3;
    int d = u / 4;
    int t = u + b - d;
    
    
    printf("Total llama population: %i\n", t);

}
