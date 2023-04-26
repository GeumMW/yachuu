#include "scoreboard.h"

scoreboard::scoreboard()
{
    Aces = -1;
    Twos = -1;
    Threes = -1;
    Fours = -1;
    Fives = -1;
    Sixes = -1;
    Bonus = -1;
    Three_of_A_Kind = -1;
    Four_of_A_Kind = -1;
    Full_House = -1;
    Small_Straight = -1;
    Large_Straight = -1;
    Chance = -1;
    Ya_chu = -1;
}

void scoreboard::temp_reset()
{
    Aces = -1;
    Twos = -1;
    Threes = -1;
    Fours = -1;
    Fives = -1;
    Sixes = -1;
    Bonus = -1;
    Three_of_A_Kind = -1;
    Four_of_A_Kind = -1;
    Full_House = -1;
    Small_Straight = -1;
    Large_Straight = -1;
    Chance = -1;
    Ya_chu = -1;
}

void scoreboard::calculate(int d1, int d2, int d3, int d4, int d5, scoreboard &tt)
{
    int di[5] = {d1, d2, d3, d4, d5};
    int temp_d;

    for (int i = 0; i < 5; i++)
    { // 점수계산이 편하도록 정렬
        for (int j = 0; j < 4; j++)
        {
            if (di[j] > di[j + 1])
            {
                temp_d = di[j];
                di[j] = di[j + 1];
                di[j + 1] = temp_d;
            }
        }
    }

    if (tt.Aces == -1)
    {
        Aces = 0;
        for (int k = 0; k < 5; k++)
        {
            if (di[k] == 1)
            {
                Aces += di[k];
            }
        }
    }

    if (tt.Twos == -1)
    {
        Twos = 0;
        for (int k = 0; k < 5; k++)
        {
            if (di[k] == 2)
            {
                Twos += di[k];
            }
        }
    }

    if (tt.Threes == -1)
    {
        Threes = 0;
        for (int k = 0; k < 5; k++)
        {
            if (di[k] == 3)
            {
                Threes += di[k];
            }
        }
    }

    if (tt.Fours == -1)
    {
        Fours = 0;
        for (int k = 0; k < 5; k++)
        {
            if (di[k] == 4)
            {
                Fours += di[k];
            }
        }
    }

    if (tt.Fives == -1)
    {
        Fives = 0;
        for (int k = 0; k < 5; k++)
        {
            if (di[k] == 5)
            {
                Fives += di[k];
            }
        }
    }

    if (tt.Sixes == -1)
    {
        Sixes = 0;
        for (int k = 0; k < 5; k++)
        {
            if (di[k] == 6)
            {
                Sixes += di[k];
            }
        }
    }

    if (tt.Three_of_A_Kind = -1)
    {
        Three_of_A_Kind = 0;
        int check = 0;
        for (int k = 0; k < 3; k++)
        {
            if (di[k] == di[k + 2])
            {
                check = 1;
            }
        }
        if (check == 1)
        {
            for (int k = 0; k < 5; k++)
            {
                Three_of_A_Kind += di[k];
            }
        }
    }
    
    if (tt.Four_of_A_Kind == -1)
    {
        Four_of_A_Kind = 0;
        int check = 0;
        for (int k = 0; k < 2; k++)
        {
            if (di[k] == di[k + 3])
            {
                check = 1;
            }
        }
        if (check == 1)
        {
            for (int k = 0; k < 5; k++)
            {
                Four_of_A_Kind += di[k];
            }
        }
    }

    if (tt.Full_House == -1)
    {
        Full_House = 0;
        if(di[0]==di[1]&&di[2]==di[4]||di[0]==di[2]&&di[3]==di[4]){
            for (int k = 0; k < 5; k++)
            {
                Full_House += di[k];
            }
        }
    }

    if (tt.Small_Straight == -1)
    {
        for(int k=0;k<2;k++){
            if(di[k]+1==di[k+1]&&di[k]+2==di[k+2]&&di[k]+3==di[k+3]){
                Small_Straight=25;
            }
        }
    }

    if (tt.Large_Straight == -1)
    {
        if(di[0]+1==di[1]&&di[0]+2==di[2]&&di[0]+3==di[3]&&di[0]+4==di[4]){
               Small_Straight=40;
        }
    }

    if (tt.Chance == -1)
    {
        Chance = 0;
        for (int k = 0; k < 5; k++)
        {
            Chance += di[k];
        }
    }

    if (tt.Ya_chu == -1)
    {
        if (di[0] == di[4])
            Ya_chu = 50;
    }
}