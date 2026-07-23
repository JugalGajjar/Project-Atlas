#pragma once

#include <string>

namespace atlas
{

class Hello
{
public:
    [[nodiscard]]
    static std::string message();
};

}