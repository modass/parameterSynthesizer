#pragma once
#include <boost/program_options.hpp>
#include <iostream>
#include <string>

namespace synthesizer
{
    namespace po = boost::program_options;

    po::variables_map parseCMDArguments(int ac, char const *av[]) {
        po::options_description desc("Allowed options");
        desc.add_options()
            ("help", "produce help message")
            ("tool", po::value<std::string>(), "Chose tool. Allowed values: flowstar")
        ;

        po::variables_map vm;
        po::store(po::parse_command_line(ac, av, desc), vm);
        po::notify(vm);

        if (vm.count("help")) {
            std::cout << desc << std::endl;
            exit(1);
        }

        if (vm.count("tool")) {
            std::cout << "Chosen tool: "
        << vm["tool"].as<std::string>() << std::endl;
        } else {
            std::cout << "No tool was chosen, abort." << std::endl;
            std::exit(0);
        }
        return vm;
    }

} // synthesizer
