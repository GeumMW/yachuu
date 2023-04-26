#include <iostream>
#include "yachu.h"
#include "scoreboard.h"
#include "dice.h"

int main()
{
    srand((unsigned int)std::time(NULL));
    dice a;
    dice b;
    dice c;
    dice d;
    dice e;
    std::cout << a.throw_dice() << std::endl;
    std::cout << b.throw_dice() << std::endl;
    std::cout << c.throw_dice() << std::endl;
    std::cout << d.throw_dice() << std::endl;
    std::cout << e.throw_dice() << std::endl;

    return 0;
}