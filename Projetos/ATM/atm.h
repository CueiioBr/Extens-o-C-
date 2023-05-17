#ifndef ATM_H
#define ATM_H

#include <iostream>
using namespace std;

class atm
{
    public:
        /*
            Declaração de Funções

            dataChecker() -> Verifica se os dados da conta inseridos na tela de login estão corretos.
            mainMenu() -> Imprime o menu de opções para o usuário após passar pelo menu de login.
            
            getBalance() -> Retorna o saldo atual do usuário.
            setBalance() -> Adiciona ou retira dinheiro da conta do usuário.

            setPhoneNumber() -> Modifica o número de telefone do usuário.

            printDetails() -> Imprime todas as informações do usuário.

        */
        int dataChecker( int, int );
        void mainMenu();

        float getBalance();
        void setBalance( int, int );

        string setPhoneNumber( string );

        void printDetails();


    private:
        int accountNumber = 100;
        int password = 2004;
        float balance = 100;
        string name = "Isaque Gabriel";
        string phoneNumber = "Not registered";
        string formatedPhoneNumber = "Not registered";
};

#endif
