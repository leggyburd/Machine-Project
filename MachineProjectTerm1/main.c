/*
Description: <This program directs the user to any of the 3 options (Silog, Maintenance, Shut Off) and interacts with the user to call the appropriate 
functions based on the input of the user>
Programmed by: <Alexa Pleyto> <S23A>
Last modified: <10/08/2024>
Version: <0.0.1>
[Acknowledgements: <list of sites or borrowed libraries and sources>]
*/

#include <stdio.h>
#include "silog.c"
#include "maintenance.c"
#include "shutoff.c"
#include "items.h"

int main()
{
    //Assign the Variables
    char userInput;

    //Create the Print Statements of the Main Menu
    printf("-------------------------------------------\n");
    printf("MAIN MENU\n");
    printf("\n");
    printf("A. Silog\n");
    printf("B. Maintenance\n");
    printf("C. Shut Off\n");
    printf("\n");

    //Create the Input Statement for the User to Navigate to their desired location
    printf("Enter the letter of where you want to proceed: ");
    scanf("%c", &userInput);

    //Create the switch statements that determines where the user wants to go
    switch (userInput) //Include smaller case letters
    {
        case 'A': 
        case 'a':
            viewItems();
            selectItems();
            break;

        case 'B':
        case 'b': 
            passwordChecker();
            break;

        case 'C':
        case 'c': 
            //shut off
            break;

        default: 
            printf("Invalid Input. Please enter the correct letter."); //add a loop here
            break;
    }

    return 0;
}