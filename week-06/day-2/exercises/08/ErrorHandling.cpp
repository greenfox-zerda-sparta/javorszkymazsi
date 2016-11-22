#include "ErrorHandling.h"

std::string ErrorHandling::interpret_exception(int exception) {
  if (exception == 1) {
    return "You can\'t push more elements. The stack can contain only 5.";
  } else if (exception == 2) {
    return "There\'s nothing in this stack.";
  }
  return "Exception found.";
}
