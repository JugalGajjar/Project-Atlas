#pragma once

#include <string>

namespace atlas::common
{

class Hello
{
public:
    [[nodiscard]]
    static std::string message();
};

}