#include "moderncpp_code_examples_config.h"
#include <iostream>

#define TOPIC "BitFields"

void Feature_BitFiels_DeafultMemberInitialization()
{

  demo_start("BitFieldDeafultMemberInitialization");
  struct
  {
    int x : 8 = 42;
  } bitfield_demo_struct;

  std::cout << "\tValue of BitField:" << bitfield_demo_struct.x << std::endl;
  demo_end("BitFieldDeafultMemberInitialization");
}

void Feature_BitFiels_MAX_Munch_Rule()
{

  demo_start("Feature_BitFiels_MAX_Munch_Rule");
  std::cout << "\tDemo Under construction" << std::endl;
  demo_end("Feature_BitFiels_MAX_Munch_Rule");
}

int main(int argc, char *argv[])
{
  std::cout << "CPP version:" << CPP_VERSION << std::endl;
  std::cout << "Topic:" << TOPIC << std::endl;
  Feature_BitFiels_DeafultMemberInitialization();
  Feature_BitFiels_MAX_Munch_Rule();
}