#include "front.hpp"
#include "upper_to_lower.hpp"

void menu()
{
    std::string response;
    while (true)
    {
        main_point:
        system("cls");
        std::cout << "\n\tGUESSING GAME V1.0 OOP PROTOTYPE\n\n";
        std::cout << "\tenter 'start' to begin: ";
        std::getline(std::cin, response);
        if (upper_to_lower(response) == "start")
        {
            break;
        } else
        {
            goto main_point;
        }
    }
    
}