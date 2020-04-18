//
// Created by kmcmaster on 4/17/2020.
//

#ifndef UNTITLED_APP_H
#define UNTITLED_APP_H
#include <iostream>       // std::cout, std::endl
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include <map>            // std::map for command dictionary
#include <iomanip> //https://stackoverflow.com/questions/5100718/integer-to-hex-string-in-c
#include <bitset>

class App {
private:
    std::map<std::string, std::string> commands;

    void AwaitInput()
    {
        std::cin.ignore();
    }

public:
    App::App(std::string command) {

        commands["header"] = "Running application";
        commands["seed"] = "enter integer seed";
        commands["oracle"] = "know thy self";

        if (commands.count(command))
        {
            std::cout<<commands[command]<<std::endl;
        }
    }

    void Run()
    {
        for (int i = 0; i < 256; ++i) {
            std::string s = std::bitset<8>(i).to_string(); // string conversions
            std::cout<< s << "  " << i << std::endl;
            std::this_thread::sleep_for (std::chrono::milliseconds (250));
        }

        AwaitInput();
    }
};

#endif //UNTITLED_APP_H
