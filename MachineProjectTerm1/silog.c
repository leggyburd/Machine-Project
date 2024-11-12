/*
Description: <This program allows the user to select the item they would like to buy, 
accept their money, and display the whole transaction process.>
Programmed by: <Alexa Pleyto> <S23A>
Last modified: <11/03/2024>
Version: <0.0.3>
[Acknowledgements: <list of sites or borrowed libraries and sources>]
*/

#include <stdio.h>
#include "items.h"

void
acceptMoney()
{
    printf("\nLIST OF ACCEPTED DENOMINATIONS:\n");

    //Print Bills
    printf("\nBills Accepted:\n");
    int bills[5] = {20, 50, 100, 200, 500};
    int i;
    for (i = 0; i < 5; i++) 
    {
        printf("%d php\n", bills[i]);
    }

    //Print Coins
    printf("\ncoins accepted:\n");
    int coins[6] = {1, 5, 10, 25, 10, 5};
    for (i = 0; i < 6; i++) 
    {
        if (coins[i] >= 25) 
        {
            printf("%d cents\n", coins[i]);
        } 
        else 
        {
            printf("%d php\n", coins[i]);
        }
    }

    int denominationInput;

    printf("\nWould you like to insert a bill or a coin?:\n");
    printf("1: Bill\n2: Coin\n");
    scanf("%d", &denominationInput);

    switch(denominationInput)
    {
        case 1:
            billDenomination(); //temporary, supposed to call the bill func
            break;

        case 2:
            coinDenomination(); //temporary, supposed to call the coin func
            break;

        default: 
            printf("Invalid Input. Please enter the correct number."); //add a loop here
            break;
    }
}

void
billDenomination()
{
    int bill;
    int billChoice;

    printf("\nEnter the number of the bill you would like to pay:\n");
    printf("1: 20 PHP\n2: 50 PHP\n3: 100 PHP\n4: 200 PHP\n5: 500 PHP\n");
    scanf("%d", &billChoice);

    switch(billChoice)
    {
        case 1:
            bill = 20;
            break;
        
        case 2: 
            bill = 50;
            break;

        case 3: 
            bill = 100;
            break;

        case 4: 
            bill = 200;
            break;

        case 5: 
            bill = 500;
            break;

        default:
            printf("Invalid input. Kindly place the correct number."); //add loop here
            break;
    }

    askUserForNewDeposit();
}

void
coinDenomination()
{
    float coin;
    int coinChoice;

    printf("\nEnter the number of the bill you would like to pay:\n");
    printf("1: 1 PHP\n2: 5 PHP\n3: 10 PHP\n4: 25 Cents\n5: 10 Cents\n6: 5 Cents\n");
    scanf("%d", &coinChoice);

    switch(coinChoice)
    {
        case 1:
            coin = 1;
            break;
        
        case 2: 
            coin = 5;
            break;

        case 3: 
            coin = 10;
            break;

        case 4: 
            coin = 0.25;
            break;

        case 5: 
            coin = 0.10;
            break;
        
        case 6: 
            coin = 0.05;
            break;

        default:
            printf("Invalid input. Kindly place the correct number."); //add loop here
            break;
    }

    askUserForNewDeposit();
}

void
askUserForNewDeposit()
{
    int newDepositDecision;
    printf("\nWould you like to insert a new bill/coin?\n");
    printf("1: Yes\n2: No\n");
    scanf("%d", &newDepositDecision);

    switch(newDepositDecision)
    {
        case 1:
        break;

        case 2:
        return;
        break;

        default:
        printf("Invalid input. Kindly place the correct number.\n"); //add loop here
        break;
    }

    int denominationInput;

    printf("\nWould you like to insert a bill or a coin?:\n");
    printf("1: Bill\n2: Coin\n");
    scanf("%d", &denominationInput);

    switch(denominationInput)
    {
        case 1:
        billDenomination();
        break;

        case 2:
        coinDenomination();
        break;

        default:
        printf("Invalid input. Kindly place the correct number.\n"); //add loop here
        break;
    }
}

//View Items
void
viewItems()
{
    printf("\n");
    printf("LIST OF ITEMS:\n");
    int itemNumber[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    char itemNames[8][11] = {"hotdog", "longganisa", "bacon", "sausage", "tapa", "tocino", "rice", "egg"};
    float itemPrice[8] = {9.50, 20.75, 12.0, 35.0, 22.50, 18.0, 15.0, 8.0};
    int stockLeft[8] = {30, 30, 30, 30, 30, 30, 30, 30};

    int i; 
    for (i = 0; i < 8; i++)
    {
        printf("-------------------------------------------\n");
        printf("%-4d %-15s %10.2f %10d\n", itemNumber[i], itemNames[i], itemPrice[i], stockLeft[i]); //fix stockleft to display "unavailable"
    }

}

//Select Items
void
selectItems()
{
    acceptMoney();

    int itemNum;
    char *itemName; 

    printf("Input the number of the item you want to select: ");
    scanf("%d", &itemNum);

    switch(itemNum)
    {
        case 1:
            itemName = "hotdog";
            break;

        case 2:
            itemName = "longganisa";
            break;

        case 3:
            itemName = "bacon";
            break;

        case 4:
            itemName = "sausage";
            break;

        case 5:
            itemName = "tapa";
            break;

        case 6:
            itemName = "tocino";
            break;

        case 7:
            itemName = "rice";
            break;

        case 8:
            itemName = "egg";
            break;

        default: 
            printf("Invalid Input. Select an available item number."); //loop here
    }

    printf("User has picked %s", itemName);
}



