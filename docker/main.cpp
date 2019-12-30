#include <vector>

#include "extensions.h"

int main(int argc, char const *argv[])
{
  kmc::print("Hello Docker container!");
  kmc::print("Using namespace kmc!");
  
  std::vector<std::string> names = { "jdawg", "ntg", "seanpapa" };

  for (const std::string n : names) {
    kmc::print(n);
  }

  return 0;
}