#include <iostream>

int main()
{
    int grade, grade2;

    std::cout << "Digite a nota da sua primeira prova:" << std::endl;
    std::cin >> grade;

    std::cout << "Digite a nota da sua segunda prova:" << std::endl;
    std::cin >> grade2;

    float result;
    result = (grade + grade2) / 2;

    if(result >= 7)
    {
        std::cout << "O aluno obteve média " << result << " e está aprovado." << std::endl;
    }
    else if(result < 7 and result >= 3)
    {
        std::cout << "O aluno obteve média " << result << " e está na recuperação." << std::endl;
    }
    else
    {
        std::cout << "O aluno obteve média " << result << " e está reprovado." << std::endl;
    }

    return 0;
}