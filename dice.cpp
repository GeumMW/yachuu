#include "dice.h"



int dice::throw_dice()
{

    scale = rand() % 6 + 1;
    return scale;
}

int dice::get_scale()
{
    return scale;
}