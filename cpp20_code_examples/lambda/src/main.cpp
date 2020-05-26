#include "moderncpp_code_examples_config.h"
#include <iostream>

#define TOPIC "Lambda"

void Feature_Lambda_Capture_This()
{
  const std::string FEATURE_NAME = "Feature_Lambda_Capture_This";
  demo_start(FEATURE_NAME);
  std::cout << "\tDemo Under construction" << std::endl;
  demo_end(FEATURE_NAME);
}

int main(int argc, char *argv[])
{
  std::cout << "CPP version:" << CPP_VERSION << std::endl;
  std::cout << "Topic:" << TOPIC << std::endl;
  Feature_Lambda_Capture_This();
}