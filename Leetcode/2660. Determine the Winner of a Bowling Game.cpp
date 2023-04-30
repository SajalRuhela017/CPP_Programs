// You are given two 0-indexed integer arrays player1 and player2, that represent the number of pins that player 1 and player 2 hit in a bowling game, respectively.

// The bowling game consists of n turns, and the number of pins in each turn is exactly 10.

// Assume a player hit xi pins in the ith turn. The value of the ith turn for the player is:

// 2xi if the player hit 10 pins in any of the previous two turns.
// Otherwise, It is xi.
// The score of the player is the sum of the values of their n turns.

// Return

// 1 if the score of player 1 is more than the score of player 2,
// 2 if the score of player 2 is more than the score of player 1, and
// 0 in case of a draw.

class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2)
    {
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < player1.size(); i++)
        {
            if(i > 0 && (player1[i - 1] == 10 || (i > 1 && player1[i - 2] == 10)))
                sum1 += 2 * player1[i];
            else
                sum1 += player1[i];
            if(i > 0 && (player2[i - 1] == 10 || (i > 1 && player2[i - 2] == 10)))
                sum2 += 2 * player2[i];
            else
                sum2 += player2[i];
        }
        if(sum1 > sum2)
            return 1;
        if(sum1 < sum2)
            return 2;
        return 0;
    }
};