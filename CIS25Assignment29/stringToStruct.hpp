
#ifndef stringToStruct_hpp
#define stringToStruct_hpp

#include <iostream>

void stringToStruct(std::string inputString);

namespace myNamespace{
using std::cout, std::endl, std::string;
};

struct movie{
    myNamespace::string title;
    int year;
};

#endif

