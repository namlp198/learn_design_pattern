#include <iostream>
#include <string>

class Handler{
    public:
    virtual Handler* SetNext(Handler* handler) = 0;
    virtual std::string Handle(std::string request) = 0;
};