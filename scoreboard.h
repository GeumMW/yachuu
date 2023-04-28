#ifndef SCOREBOARD_H
#define SCOREBOARD_H

class scoreboard
{
private: // 족보
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
    void calculate(int d1, int d2, int d3, int d4, int d5, scoreboard &tt); // 점수 계산 함수
    void temp_reset(); // 템프 점수 전용 리셋함수 매 턴 마다 실행

};

#endif