#include <iostream>
#include <string>

namespace kmc 
{
    template<typename T>
    void print(const T t)
    {
        std::cout << t;
    }

    template<typename T>
    void printLine(const T t)
    {
        print(t);
        std::cout << std::endl;
    }
}