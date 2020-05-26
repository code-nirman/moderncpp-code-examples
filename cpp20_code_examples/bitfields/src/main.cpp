#include "moderncpp_code_examples_config.h"
#include <iostream>

#define TOPIC "BitFields"

void Feature_BitFields_DeafultMemberInitialization()
{
  const std::string FEATURE_NAME = "BitFieldsDeafultMemberInitialization";
  demo_start(FEATURE_NAME);
  struct
  {
    int x : 8 = 42;
  } bitfield_demo_struct;

  std::cout << "\tValue of BitField:" << bitfield_demo_struct.x << std::endl;
  demo_end(FEATURE_NAME);
}

void Feature_BitFields_MAX_Munch_Rule()
{
  const std::string FEATURE_NAME = "Feature_BitFiedls_MAX_Munch_Rule";
  demo_start(FEATURE_NAME);
  std::cout << "\tDemo Under construction" << std::endl;
  demo_end(FEATURE_NAME);
}

int main(int argc, char *argv[])
{
  std::cout << "CPP version:" << CPP_VERSION << std::endl;
  std::cout << "Topic:" << TOPIC << std::endl;
  Feature_BitFiels_DeafultMemberInitialization();
  Feature_BitFiels_MAX_Munch_Rule();
}