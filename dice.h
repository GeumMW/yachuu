#ifndef DICE_H
#define DICE_H
#include <cstdlib>
#include <ctime>

class dice
{
private:
    int scale; // ����

public:
    dice() { scale = 0; }
    void throw_dice(); // �ֻ��� ������
    int get_scale(); // �ֻ��� ���� ��ȯ
};

#endif