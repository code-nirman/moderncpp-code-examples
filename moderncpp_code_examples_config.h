#include <iostream>
#include <string>
// the configured options and settings
#define MODERNCPP_CODE_EXAMPLES_VERSION_MAJOR 1
#define MODERNCPP_CODE_EXAMPLES_VERSION_MINOR .0

#if __cplusplus > 201703L
#define CPP_VERSION 20
#else
#define CPP_VERSION 17
#endif

void demo_start(const std::string feature)
{
    std::cout << "Demo Start Feature:" << feature << std::endl;
}
void demo_end(const std::string feature)
{
    std::cout << "Demo End Feature:" << feature << std::endl;
}

// void print_environment_info()
// {
//     std::cout << "CPP version:" << CPP_VERSION << std::endl;
//     std::cout << "CPP " << CPP_VERSION << " topic "
//               << TOPIC << std::endl;
// }