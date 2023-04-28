#ifndef DICE_H
#define DICE_H
#include <cstdlib>
#include <ctime>

class dice
{
private:
    int scale; // 눈금

public:
    dice() { scale = 0; }
    void throw_dice(); // 주사위 굴리기
    int get_scale(); // 주사위 눈금 반환
};

#endif