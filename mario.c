#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare height variable h
    int h;
    do
    {
        //ask user for height 
        h = get_int("Height: ");
    }
    //loop until user provides correct input
    while (h < 1 || h > 8);

    //declare line number variable
    int x = 1;
    
    // loop to enter down one line
    for (int i = 0; i < h; i++)
    {
    
    //loop to print left stairs   
        
        //loop to print spaces
        for (int j = 0; j < h - x; j++)
        {
            printf(" ");
        }

        //loop to print hashes
        for (int k = 0; k < x; k++)
        {
            printf("#");
        }
    
    //print 2 space gap between stairs
        printf("  ");

    //loop to print right stairs

        //loop to print # x number of times
        for (int l = 0; l < x; l++)
        {
            printf("#");
        }

        //complete new line loop
        printf("\n");

        //increment line number variable (x)
        x++;
    }
}
