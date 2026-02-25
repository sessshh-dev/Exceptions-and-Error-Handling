#include "bad_length.h"

bad_length::bad_length(const std::string& message)
    : std::runtime_error(message) {}