/*
Description: <This program is given access to the seller to monitor the vending machine such as 
the prices, restocking, and cash register>
Programmed by: <Alexa Pleyto> <S23A>
Last modified: <10/11/2024>
Version: <0.0.2>
[Acknowledgements: <list of sites or borrowed libraries and sources>]
*/

#include <stdio.h>
#include "items.h"

//Input Password for Seller
void 
passwordChecker()
{
    //Assign the Variables
    int password;

    //Create the input for the password
    printf("Input your numeric password: ");
    scanf("%d", &password);

    if (password == 123456)
    {
        viewInventory(); //temporary
    }

    else
    {
        printf("Access Denied."); //add a loop here
    }
}

//Inventory Features
void
viewInventory()
{
    viewItems();
}


/*FUCKING FIX THIS TOM*/

void
modifyPrice(int itemNumber[], char itemNames[], float itemPrice[], int stockLeft[])
{
    int itemNumbers;
    float newPrice;
    int pricesDecision;

    printf("\nWould you like to modify the prices?\n1: Yes\n2: No\n");
    scanf("%d", &pricesDecision);

    if (pricesDecision == 1) 
    {
        printf("\nEnter the number of the item you would like to modify: ");
        scanf("%d", &itemNumbers);

        if (itemNumbers >= 1 && itemNumbers <= 8)
        {
            printf("Enter the new price: ", &itemNumbers);
            scanf("%f", &newPrice);

            itemPrice[itemNumbers - 1] = newPrice;
            printf("item %d is now %.2f\n", itemNumbers, newPrice);
        } 
        else 
        {
            printf("Invalid Input. Please choose an item number from 1-8."); //loop here
        }

    }
    int i;

    for (i = 0; i < 8; i++)
    {
        printf("-------------------------------------------\n");
        printf("%-4d %-15s %10.2f %10d\n", itemNumber[i], itemNames[i], itemPrice[i], stockLeft[i]); //fix stockleft to display "unavailable"
    }
   
}
