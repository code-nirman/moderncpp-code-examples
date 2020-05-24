#include "moderncpp_code_examples_config.h"
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    // report version
    std::cout << argv[0] << " Version " << MODERNCPP_CODE_EXAMPLES_VERSION_MAJOR << "."
              << MODERNCPP_CODE_EXAMPLES_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }
  std::cout << "Program to test cmake project setup with multiple subdir & \
      setting cpp version "
            << std::endl;
  const double inputValue = std::stod(argv[1]);
}