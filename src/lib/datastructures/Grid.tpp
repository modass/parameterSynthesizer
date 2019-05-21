#pragma once
#include "Grid.h"

namespace synthesizer {

    template<typename Tool>
    std::optional<State> Grid<Tool>::getState(const Coordinate& coord) {
        return State::UNKNOWN;
    }

}