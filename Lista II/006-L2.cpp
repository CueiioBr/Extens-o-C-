#include <iostream>
using namespace std;

int main() 
{
    // ASCII value 
    int num = 65;
    int k;

    std::cout << "Digite quantas linhas a pirâmide deve ter:";
    std::cin >> k;
 
    for (int i=0;i<=k;i++)
    {
        for (int j=0; j<=i; j++)
        {
            //conversor
            char ch = char(num);
 
            
            cout << " " << ch;
        }
         
        num = num + 1;
  
        cout << endl;
    }
    return 0;
}
 