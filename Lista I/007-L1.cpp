#include <iostream>

int main()
{
    char num; 
    float height, weight;

    std::cout << "Calculadora de Peso Ideal\n" << std::endl;
    std::cout << "Digite a sua altura atual:" << std::endl;
    std::cin >> height;

    std::cout << "Digite seu peso atual:" << std::endl;
    std::cin >> weight;

    std::cout << "[1] Homem \n[2] Mulher \nSelecione seu gênero:" << std::endl;
    std::cin  >> num;

    float idealh, idealm;
    idealh = (72.7 * height) - 58;
    idealm = (62.1 * height) - 44.7;

    switch(num)
    {
        case '1':
                    if(weight < idealh)
                    {
                        std::cout << "Peso atual: " << weight << "\nPeso ideal: " << idealh << "\nVocê está abaixo do peso!" << std::endl;
                        break;
                    }
                    else if(weight > idealh)
                    {
                        std::cout << "Peso atual: " << weight << "\nPeso ideal: " << idealh << "\nVocê está acima do peso!" << std::endl;
                        break;
                    }
                    else
                    {
                        std::cout << "Peso atual: " << weight << "\nPeso ideal: " << idealh << "\nVocê está no peso ideal!" << std::endl;
                        break;
                    }
        
        case '2':
                    if(weight < idealm)
                    {
                        std::cout << "Peso atual: " << weight << "\nPeso ideal: " << idealm << "\nVocê está abaixo do peso!" << std::endl;
                        break;
                    }
                    else if(weight > idealm)
                    {
                        std::cout << "Peso atual: " << weight << "\nPeso ideal: " << idealh << "\nVocê está acima do peso!" << std::endl;
                        break;
                    }
                    else
                    {
                        std::cout << "Peso atual: " << weight << "\nPeso ideal: " << idealh << "\nVocê está no peso ideal!" << std::endl;
                        break;
                    }
    }

    return 0;
}