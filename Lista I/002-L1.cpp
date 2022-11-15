#include <iostream>

int main()
{
    int age;

    std::cout << "Digite Sua Idade:" << std::endl;
    std::cin >> age;

    if(age >= 18)
    {
        std::cout << "\nEssa pessoa têm " << age << " Anos" << std::endl;
        std::cout << "Ela é maior de idade." << std::endl; 
    }
    else
    {
        std::cout << "Essa pessoa têm " << age << " Anos" << std::endl;
        std::cout << "Ela é menor de idade." << std::endl;
    }

    return 0;

}