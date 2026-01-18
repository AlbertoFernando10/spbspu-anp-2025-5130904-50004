#ifndef FERNANDO_HPP
#define FERNANDO_HPP

#include <cstddef>

namespace fernando
{
    // EQL-SEQ: máximo número de elementos iguais consecutivos
    size_t maxEqualSequence(int sequence[], size_t size);
    
    // MON-INC: comprimento do maior fragmento estritamente crescente
    size_t maxIncreasingFragment(int sequence[], size_t size);
}

#endif // FERNANDO_HPP
