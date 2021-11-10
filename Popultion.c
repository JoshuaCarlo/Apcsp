#include <cs50.h>
#include <stdio.h>

/*
This code uses consistent style and give correct output. The variable names that you have used
are not up to the C programming style guides. Variable names should make the data stored within them immediatly 
understood by someone reading the code. Single letter variable names do not allow this to happen. Instead of 'b' use 'born', etc.
Overall a solid start to C programming.
*/

int main(void)
{

    int u = get_int("enter a number: ");
 
    int b = u / 3;
    int d = u / 4;
    int t = u + b - d;
    
    
    printf("Total llama population: %i\n", t);

}
