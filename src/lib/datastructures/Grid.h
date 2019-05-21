#pragma once
#include "Coordinate.h"
#include "../types.h"

#include <optional>

namespace synthesizer {

template<typename Tool>
class Grid {
    private:
    public:

    std::optional<State> getState(const Coordinate<Tool>& coord);

};

}

#include "Grid.tpp"