// Make a program in C++ for read two whole numbers any and print what their is bigger.
// Atention: consider the possibility of the numbers being equals.

// Faça um programa em C++ para ler dois números inteiros quaisquer e imprimir qual deles é o maior. 
// Atenção considere a possibilidade dos números serem iguais.


#include <iostream>
int main()
{
    int num, num2;

    std::cout << "Digite um numero: \n";
    std::cin >> num;
    std::cout << "Digite um numero: \n";
    std::cin >> num2;

    if(num > num2)
    {
        std::cout << num << " é Maior Que " << num2 << std::endl;
    }
    else if(num < num2)
    {
        std::cout << num2 << " é Maior Que " << num << std::endl;
    }
    else
    {
        std::cout <<"\nSão Números Iguais" << std::endl;
    }

    return 0;

}