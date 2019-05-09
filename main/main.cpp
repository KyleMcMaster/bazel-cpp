/*
* author: kylermcmaster@gmail.com
* build using: bazel build ///main:hello-bazel
*/
#include <iostream> 
#include <cstdio>

#include "greeting-service.h"

int main()      
{    
    std::string msg = get_message("Bazel");
    std::cout << msg;
    std::getchar();
    return 0;      
}