#include "dice.h"

void dice::throw_dice()
{

    scale = rand() % 6 + 1;
}

int dice::get_scale()
{
    return scale;
}