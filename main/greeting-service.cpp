#include "greeting-service.h"
#include <string>

std::string get_message(const std::string &message) {
  return "Hello " + message + "!";
}