#pragma once
#include "Coordinate.h"
#include "Subdivision.h"
#include "../types.h"

#include <optional>

namespace synthesizer {

template<Subdivision& subdiv>
class Grid {
    private:
    public:

    std::optional<State> getState(const Coordinate<subdiv>& coord);

};

}

#include "Grid.tpp"