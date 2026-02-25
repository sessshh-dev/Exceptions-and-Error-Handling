#ifndef BAD_LENGTH_H
#define BAD_LENGTH_H

#include <iostream>
#include <stdexcept>


class bad_length : public std::runtime_error {
public:
    explicit bad_length(const std::string& message);
};

#endif