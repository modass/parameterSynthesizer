string(TIMESTAMP major %y UTC)
string(TIMESTAMP minor %m UTC)

project(parameterSynthesizer
        VERSION ${major}.${minor}
        DESCRIPTION "Parameter synthesis tool for hybrid systems safety verification tools."
        HOMEPAGE_URL "github.com/modass/parameterSynthesizer"
        LANGUAGES CXX)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -std=c++17 )