#include <iostream>

#include "atlas_common/hello.hpp"

int main()
{
    std::cout << atlas::common::Hello::message() << '\n';

    return 0;
}