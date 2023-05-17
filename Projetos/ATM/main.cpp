#include <iostream>
#include <windows.h>
#include <conio.h>
#include "atm.h"

using namespace std;

int main()
{
    atm user; 

    int account_number, password, main_option;
    string phone_number;
    float amount = 0;
    while(true)
    {
        do
        {
            printf("iBank - Digital ATM\n");
            printf("Enter your account number:\n");
            scanf("%d", &account_number);
            printf("Enter your password:\n");
            scanf("%d", &password);
            system("cls");
        } while (account_number < 0 && password < 0);

        if(user.verifier(account_number, password) == 1)
        {
            printf("Authorized access\nWait...\n");
            Sleep(2000);
            system("cls");

            while (true)
            {
                user.menu();
                scanf("%d", &main_option);
                system("cls");

                switch (main_option)
                {
                    case 1:
                        printf("Balance: R$%.2f\n", user.getBalance());
                        Sleep(2000);
                        system("cls");
                        break;

                    case 2:
                        printf("Enter the amount you want to withdraw:\n");
                        scanf("%f", &amount);
                        user.setBalance(amount, 1);
                        Sleep(2000);
                        system("cls");
                        break;
                    
                    case 3:
                        printf("Enter the amount you want to deposit:\n");
                        scanf("%f", &amount);
                        user.setBalance(amount, 2);
                        Sleep(2000);
                        system("cls");
                        break;
                    
                    case 4:
                        user.printDetails();
                        Sleep(2000);
                        system("cls");
                        break;
                    
                    case 5:
                        cout << "Enter your new phone number: ";
                        cin >> phone_number;

                        if(phone_number.length() == 11)
                        {
                            user.setPhoneNumber(phone_number);
                            cout << user.getNumber();
                            Sleep(2000);
                            system("cls");
                        }
                        
                        else
                        {
                            printf("Invalid Number, Try Again.");
                        }
                        break;
                    
                    case 6:
                        return 0;
                        break;
                }
            }       
            
        }

        else
        {
            printf("Access Denied, please try again.\n");
            Sleep(2000);
            system("cls");
        }
    }
}