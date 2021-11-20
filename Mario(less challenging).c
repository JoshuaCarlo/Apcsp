#include <stdio.h>
#include <cs50.h>

int main(){
    int spaces=0;
    int hashes; 
    int height=0;
    //this do while function is mainly meant to reprompt the user if the 
    //number is too low or too hight
    do
    {
    height = get_int("height: "); 
    }
    while(height < 1 || height > 8);
    for (int row = 0; row < height; row++)
    {
        //this is the function that creates the spaces before the #
        //this is done by taking the height, subtracting the row which
        //gets more added to it due to the for loop
        for (spaces = 0; spaces < height - row - 1; spaces++)
        {
            printf(" ");
        }
        //this function is responsable for printing out the hashes
        //this is combination with the spaces by checking the row 
        for(int pyramidHashes = 0; pyramidHashes <= row; pyramidHashes++)
        {
            printf("#");
        }
        printf("  ");
        printf("\n");
          
    }
}
