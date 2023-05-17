#ifndef ATM_H
#define ATM_H
#include <iostream>

class atm
{
    public:
    
        void menu();

        int verifier(int acc, int pss)
        {
            if(acc == account_number && pss == password)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        float getBalance()
        {
            return balance;
        }

        void setBalance(int amt, int opt)
        {
            if(amt > 0 && opt == 1)
            {
                if(balance > 0 && (balance - amt) >= 0)
                {
                    balance -= amt;
                }
            }

            else if(amt > 0 && opt == 2)
            {
                balance += amt;
            }
        }

        void setPhoneNumber(std::string nmbr)
        {
            phone_number = nmbr;
            formated_phone_number = "(" + phone_number.substr(0,2) + ") " + phone_number.substr(2, 5) + "-" + phone_number.substr(7);
        }

        std::string getNumber()
        {
            return phone_number;
        }

        void printDetails()
        {
            std::cout << "Name: " << name << "\nAccount Number: " << account_number <<"\nPhone Number: " << formated_phone_number;
        }

    private:
        int account_number = 100, password = 2004;
        float balance = 100;
        std::string name = "Isaque Gabriel", phone_number = "81994929522";
        std::string formated_phone_number = "(" + phone_number.substr(0,2) + ") " + phone_number.substr(2, 5) + "-" + phone_number.substr(7);
};

#endif
