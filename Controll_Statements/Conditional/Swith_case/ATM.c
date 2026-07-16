#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000.00;
    float amount;

    do
    {
        printf("\n====================================");
        printf("\n        ATM MANAGEMENT SYSTEM");
        printf("\n====================================");
        printf("\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Exit");
        printf("\n------------------------------------");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("\nCurrent Balance = Rs. %.2f\n", balance);
                break;

            case 2:

                printf("\nEnter Deposit Amount: ");
                scanf("%f", &amount);

                if(amount > 0)
                {
                    balance = balance + amount;

                    printf("\nDeposit Successful.");
                    printf("\nCurrent Balance = Rs. %.2f\n", balance);
                }
                else
                {
                    printf("\nInvalid Deposit Amount.\n");
                }

                break;

            case 3:

                printf("\nEnter Withdrawal Amount: ");
                scanf("%f", &amount);

                if(amount <= 0)
                {
                    printf("\nInvalid Amount.\n");
                }
                else if(amount > balance)
                {
                    printf("\nInsufficient Balance.\n");
                }
                else
                {
                    balance = balance - amount;

                    printf("\nPlease Collect Your Cash.");
                    printf("\nRemaining Balance = Rs. %.2f\n", balance);
                }

                break;

            case 4:

                printf("\nThank You For Using Our ATM.");
                printf("\nVisit Again!\n");

                break;

            default:

                printf("\nInvalid Choice.\n");
        }

    }while(choice != 4);

    return 0;
}