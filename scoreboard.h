#ifndef SCOREBOARD_H
#define SCOREBOARD_H

class scoreboard
{
private: // ����
    int Aces;
    int Twos;
    int Threes;
    int Fours;
    int Fives;
    int Sixes;
    int Bonus;
    int Three_of_A_Kind;
    int Four_of_A_Kind;
    int Full_House;
    int Small_Straight;
    int Large_Straight;
    int Chance;
    int Ya_chu;

public:
    scoreboard();
    void calculate(int d1, int d2, int d3, int d4, int d5, scoreboard &tt); // ���� ��� �Լ�
    void temp_reset(); // ���� ���� ���� �����Լ� �� �� ���� ����

};

#endif