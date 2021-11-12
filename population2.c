#include <cs50.h>
#include <stdio.h>

int main(void){
    //This is where all the variables are declared.
    //Some are given the value of 0 in order to calculate
    int years=0;
    int deaths;
    int births;
    int startSize;
    int total=0;
    int endSize=0;
    //This do and while loop below creates the prompt to ask user for an intiger.
    // If this intiger is less than 9, it reprompts and asks for a different number.
    do{
        startSize = get_int("start size: ");
    }
    while(startSize < 9);
    //This do and while loop below asks the user for an end size.
    //It reprompts the user if the number entered is less than the starting size.
    do{
        endSize = get_int("end size: ");
    }
    while(endSize < startSize);
    
    // This while loop below is responsable for the calculation of the amount of years it would take.
    // Below it is the print statement for the amount of Years.
    while(startSize < endSize){
        
        births = startSize / 3;
        deaths = startSize / 4;
        startSize = startSize + births - deaths;
        years++;
    }
    printf("Years: %i\n", years);
}
