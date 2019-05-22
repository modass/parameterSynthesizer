#include "Coordinate.h"

namespace synthesizer
{
    template<Subdivision& subdiv>
    Coordinate<subdiv>() {
        for( std::size_t i = 0; i < subdiv.size(); ++i ) {
            mCoordinate.emplace_back(std::vector<std::size_t>(subdiv[i].size(), 1));
        }
    }

    template<Subdivision& subdiv>
    Coordinate& increment(std::size_t parameter, std::size_t level) {
        mCoordinate[parameter][level] += 1;
        return *this->normalize();
    }

    template<Subdivision& subdiv>
    Coordinate& normalize() {
        for( std::size_t i = 0; i < mCoordinate.size(); ++i ) {
            for( std::size_t j = mCoordinate[i].size()-1; j > 0; --j ){
                if( *rIt >= subdiv[i][j] ) {
                    mCoordinate[i][j-1] += *rIt - subdiv[i][j];
                }
            }
        }
        return *this;
    }

} // namespace synthesizer
