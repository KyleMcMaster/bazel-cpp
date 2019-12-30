#include <vector>

#include "extensions.h"

int main(int argc, char const *argv[])
{
  kmc::printLine("Hello Docker container!");
  
  std::vector<std::string> names = { "jdawg", "ntg", "seanpapa" };

  for (const std::string n : names) {
    kmc::printLine(n);
  }

  return 0;
}