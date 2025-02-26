#ifndef BOT_H
#define BOT_H

#include <vector>
using namespace std;

class Bot 
{
private:
    char botSymbol;
    char playerSymbol;
    int difficulty;

public:
    Bot(char symbol, int level);
    int getMove(vector<vector<char>>& board);
    bool checkWin(vector<vector<char>>& board, char symbol);

private:
    int minimax(vector<vector<char>>& board, bool isMaximizing);
    bool isMovesLeft(vector<vector<char>>& board);
    int evaluate(vector<vector<char>>& board);
};

#endif
