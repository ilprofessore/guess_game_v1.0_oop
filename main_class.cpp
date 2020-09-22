#include "main_class.hpp"
// default arguments must not be assigned here!
Player::Player(std::string answer, int level, std::string statement, char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m)
{
check_point:
    system("cls");
    std::cout << "\n->\tLEVEL " << level << "\n\n->\t" << statement << "\n\n";
    std::cout << "->\t" << a << "\t" << b << "\t" << c << "\t" << d << "\t" << e << "\t" << f << "\t" << g << "\t" << h << "\t" << i << "\t" << j << "\t" << k << "\t" << l << "\t" << m << "\n\n->\t";
    std::getline(std::cin, guess);
    guess_database.push_back(guess);
    guess = upper_to_lower(guess);
    if (guess == answer)
    {
        std::cout << "\n\tyou win!\n\n";
        std::cout << "\n\tall of your previous guesses are displayed below: \n\n";
        for (int i = 0; i < guess_database.size(); i++)
        {
            std::cout << "\t" << guess_database[i] << "\n";
        }
        std::cout << "\n->\tyou won in " << guess_database.size() << " tries.\n\n\tpress any key to continue;";
        getchar();
    }
    else
    {
        goto check_point;
    }
}
