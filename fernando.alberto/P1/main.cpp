#include <iostream>
#include <vector>
#include "fernando.h"

int main()
{
    std::vector<int> sequence;
    int value;
    
    // Ler sequência até encontrar 0
    while (std::cin >> value && value != 0)
    {
        sequence.push_back(value);
    }
    
    // Verificar entrada inválida
    if (std::cin.fail())
    {
        std::cerr << "Error: invalid input" << std::endl;
        return 1;
    }
    
    // Verificar sequência muito curta
    if (sequence.empty())
    {
        std::cerr << "Error: sequence too short" << std::endl;
        return 2;
    }
    
    // Calcular e exibir resultados
    size_t eqlSeq = fernando::maxEqualSequence(sequence.data(), sequence.size());
    size_t monInc = fernando::maxIncreasingFragment(sequence.data(), sequence.size());
    
    std::cout << eqlSeq << std::endl;
    std::cout << monInc << std::endl;
    
    return 0;
}
