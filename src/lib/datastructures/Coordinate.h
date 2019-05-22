#pragma once
#include "Subdivision.h"

namespace synthesizer {

template<Subdivision& subdiv>
class Coordinate {
    private:
    std::vector<std::vector<std::size_t>> mCoordinate;
    public:
    Coordinate();
    Coordinate(const Coordinate<subdiv>& orig) = default;

    Coordinate& increment(std::size_t parameter, std::size_t level);

    Coordinate& normalize();
};

} // namespace

#include "Coordinate.tpp"