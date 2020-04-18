#include <iostream>
#include "App.h"

int main() {

    std::cout<<"enter command" <<std::endl;
    std::string s;
    std::cin>>s;
    auto app = new App(s);

    app->Run();

    return 0;
}
