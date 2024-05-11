#include <iostream>
#include <string>

class AbstractProductA
{
public:
    virtual ~AbstractProductA(){};
    virtual std::string UsefulFunction() const = 0;
};