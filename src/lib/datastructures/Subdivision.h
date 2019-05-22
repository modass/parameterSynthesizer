#pragma once
#include <vector>

namespace synthesizer
{
    struct Subdivision {
        std::vector<double> base;
        std::vector<std::vector<std::size_t>> scheme;
    };

} // namespace synthesizer
