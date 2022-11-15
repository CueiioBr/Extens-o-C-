# Estrutura de Controle Condicional/Seleção

> Resolução da lista de exercícios, voltados para a fixação do conteúdo sobre `Estruturas De Condição/Seleção` 
> apresentadas durante o curso de `Introdução à Linguagem de Programação C++` ministrada pelo professor `Antonio Nascimento de Araújo Sobrinho`.

## :rocket: Começando
Para poder começar a utilizar e testar esses códigos siga esses passos:

- Clone o projeto para sua máquina local
- Siga uma das opções em [Pré-requisitos](#clipboard-pré-requisitos)
- Faça alterações que desejar no código

## :clipboard: Pré-requisitos
Você pode utilizar qualquer interface que desejar para a utilização do projeto, mas as opções recomendadas são:

### [Dev-C++](https://www.bloodshed.net/)
> Interface voltada para o desenvolvimento de programas em `C/C++`, para utilizar a mesma copie o código do arquivo [src/main.cpp](./src/main.cpp)
> e cole-o na interface. É a interface ideal para utilizar caso deseje utilizar o projeto de forma mais simples e concisa sem muita configuração.
### [VS-Code](https://code.visualstudio.com/)
> É um ambiente mais robusto e capaz de incluir testes personalizados
> e ter várias informações de desenvolvimento para múltiplas plataformas. Para utilizar é necessário apenas abrir a pasta do projeto no VSCode.

## :package: Implementação
Para utilizar acentuação dentro dos seus códigos utilize a biblioteca `<locale.h>`.

- Utilizamos a função `setlocale()` para fazer a adaptação do programa ao idioma desejado.
> Para utilizar a localidade especificada pelo sistema operacional usamos a função `setlocale()` da seguinte forma:
- `setlocale(LC_ALL,“ ”)` onde **LC_ALL** faz referência à todos os aspectos da localização.
> É possível escolher uma localidade especificando diretamente o nome da mesma, porém é importante notar que diferentes sistemas operacionais usam diferentes formas para lidar com localidades. Devido a este fato o código torna-se menos portável ao optar por esta forma mais específica.
- no **Windows 10** a localidade brasileira é dada apenas por: `“Portuguese”`
- no **Windows 7, 8** a localidade brasileira é dada por: `“Portuguese_Brasil.1252”`
- no **Linux** para fazer referência à localidade brasileira devemos usar `“pt_BR_utf8”.`
## :bust_in_silhouette: Desenvolvedor
- [Isaque Gabriel](https://github.com/IsaqueeG)