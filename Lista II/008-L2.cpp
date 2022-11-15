#include <iostream>
/*
R$ 100,00 		Poupança 		   0,5%
R$ 1000,00 		Fundo Renda Fixa 	1%
R$ 2500,00 		CDBs 			      1,5%
*/

int main()
{
	float valor,rentabilidade;
	
	do{

		std::cout << "Valor a ser investido: " << std::endl;
		std::cin >> valor;
		
		if(valor > 0 && valor < 100){
			std::cout << "Nao ha modalidades de investimento disponiveis!" << std::endl;
		}	
		if(valor >= 100) {
			std::cout << "Poupanca ->";
			rentabilidade = valor * 0.005f;
			std::cout << "Rentabilidade: R$" << rentabilidade << std::endl;	
		}
		if(valor >= 1000) {
			std::cout << "Fundo Renda Fixa -> ";
			rentabilidade = valor * 0.01f;
			std::cout << "Rentabilidade: R$" << rentabilidade << std::endl;	
		}
		if(valor >= 2500) {
			std::cout << "CDBs -> " ;
			rentabilidade = valor * 0.015f;
			std::cout << "Rentabilidade: R$" << rentabilidade  << std::endl;	
		}
	
	}while(valor > 0);
		
	return 0;
}
