#include <iostream>

class Target
{
public:
    virtual ~Target(){};
    virtual std::string Request() const {
        return "Target: the default target's behavior";
    }
};