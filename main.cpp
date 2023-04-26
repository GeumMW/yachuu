#include <iostream>
#include "yachu.h"
#include "scoreboard.h"
#include "dice.h"

int main()
{
    srand((unsigned int)std::time(NULL));
    dice a;
    std::cout << a.get_scale() << std::endl;
    std::cout << a.throw_dice() << std::endl;
    std::cout << a.throw_dice() << std::endl;
    std::cout << a.throw_dice() << std::endl;
    std::cout << a.throw_dice() << std::endl;
}