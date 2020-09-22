#ifndef MAIN_CLASS_HPP
#define MAIN_CLASS_HPP

#include "upper_to_lower.hpp"

class Player
{
    public:
    std::string guess;
    std::vector <std::string> guess_database;
    Player(std::string answer, int level, std::string statement, char a = ' ', char b = ' ', char c = ' ', char d = ' ', char e = ' ', char f = ' ', char g = ' ', char h = ' ', char i = ' ', char j = ' ', char k = ' ', char l = ' ', char m = ' ');
};


#endif