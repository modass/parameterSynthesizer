#pragma once

namespace synthesizer
{

template<typename Tool>
class Executor {
private:
public:

    void call() const;
};

} // synthesizer

#include "Executor.tpp"
