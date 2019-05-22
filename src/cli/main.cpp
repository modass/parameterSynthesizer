#include "OptionsParser.h"

int main(int argc, char const *argv[])
{
    auto options = synthesizer::parseCMDArguments(argc,argv);
    return 0;
}
