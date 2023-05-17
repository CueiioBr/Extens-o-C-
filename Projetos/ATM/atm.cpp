#include <iostream>
using namespace std;
#include "atm.h"

void atm::mainMenu()
{
    cout << "iBank - Digital ATM" << endl;
    cout << "[1] - Check Balance\n[2] - Withdraw\n[3] - Deposit\n[4] - User Details\n[5] - Change Phone Number\n[6] - Exit" << endl;
    cout << "Choice a option:" << endl;
}

int atm::dataChecker( int accountVar, int passwordVar )
{
    if(accountVar == accountNumber && passwordVar == password)
    {
        return 1;
    }
    
    else
    {
        return 0;
    }

}

float atm::getBalance()
{
    return balance;
}

void atm::setBalance(int amountVar, int optionVar)
{
    if(amountVar > 0 && optionVar == 1)
    {
        if(balance > 0 && (balance - amountVar) >= 0)
        {
            balance -= amountVar;
        }
    }

    else if(amountVar > 0 && optionVar == 2)
    {
        balance += amountVar;
    }
}

string atm::setPhoneNumber(string numberVar)
{
    phoneNumber = numberVar;
    formatedPhoneNumber = "(" + phoneNumber.substr(0,2) + ") " + phoneNumber.substr(2, 5) + "-" + phoneNumber.substr(7);

    return formatedPhoneNumber;
}

void atm::printDetails()
{
    std::cout << "Name: " << name << "\nAccount Number: " << accountNumber <<"\nPhone Number: " << formatedPhoneNumber;
}

