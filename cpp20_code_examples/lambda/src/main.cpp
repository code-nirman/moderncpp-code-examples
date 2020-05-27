#include "moderncpp_code_examples_config.h"
#include <iostream>
#include <vector>
#include <algorithm>

#define TOPIC "Lambda"

class FeatureLambdaCaptureThis
{
private:
  int addend;

public:
  FeatureLambdaCaptureThis(FeatureLambdaCaptureThis &)
  {
    std::cout << "\tInside copy constructor" << std::endl;
  }

  FeatureLambdaCaptureThis(FeatureLambdaCaptureThis &&)
  {
    std::cout << "\tInside move constructor" << std::endl;
  }
  FeatureLambdaCaptureThis &operator=(const FeatureLambdaCaptureThis &)
  {
    std::cout << "\tInside assignment constructor" << std::endl;
    return *this;
  }

  FeatureLambdaCaptureThis(int value) : addend{value}
  {
  }
  void DemoLambdaCapture_This()
  {
    std::vector<int> values{1, 3, 5, 7, 9, 11, 13, 15};
    std::cout << "\t Demo lambda capture this" << std::endl;
    std::for_each(values.begin(), values.end(), [this](auto &value) {
      value += addend;
    });
    std::cout << "\t Results after applying lambda. Values: ";
    for (auto &value : values)
    {
      std::cout << " " << value;
    }
    std::cout << std::endl;
  }

  void DemoLambdaCapture_ThisByValue()
  {
    std::vector<int> values{1, 3, 5, 7, 9, 11, 13, 15};
    std::cout << "\t Demo lambda capture this by value" << std::endl;
    std::for_each(values.begin(), values.end(), [*this](auto &value) {
      std::cout << value;
      value += addend;
    });
    std::cout << "\t Results after applying lambda. Not safe. Object has been moved";
    for (auto &value : values)
    {
      std::cout << " " << value;
    }
    std::cout << std::endl;
  }
};

void Feature_Lambda_Capture_This()
{
  const std::string FEATURE_NAME = "Feature_Lambda_Capture_This";
  demo_start(FEATURE_NAME);
  FeatureLambdaCaptureThis obj{1};
  obj.DemoLambdaCapture_This();
  demo_end(FEATURE_NAME);

  const std::string FEATURE2_NAME = "DemoLambdaCapture_ThisByValue";
  demo_start(FEATURE2_NAME);
  obj.DemoLambdaCapture_ThisByValue();
  demo_end(FEATURE2_NAME);
}

int main(int argc, char *argv[])
{
  std::cout << "CPP version:" << CPP_VERSION << std::endl;
  std::cout << "Topic:" << TOPIC << std::endl;
  Feature_Lambda_Capture_This();
}