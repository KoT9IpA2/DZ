#include "Bot.h"
#include <cstdlib>
#include <limits.h>

Bot::Bot(char symbol, int level) 
{
    botSymbol = symbol;
    playerSymbol = (symbol == 'X') ? 'O' : 'X';
    difficulty = level;
}

bool Bot::checkWin(vector<vector<char>>& board, char symbol) 
{
    for (int i = 0; i < 3; ++i) 
    {
        if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) return true;
        if (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol) return true;
    }
    if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) return true;
    if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol) return true;
    return false;
}

bool Bot::isMovesLeft(vector<vector<char>>& board) 
{
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;
    return false;
}

int Bot::evaluate(vector<vector<char>>& board) 
{
    if (checkWin(board, botSymbol)) return 10;
    if (checkWin(board, playerSymbol)) return -10;
    return 0;
}

int Bot::minimax(vector<vector<char>>& board, bool isMaximizing) 
{
    int score = evaluate(board);
    if (score == 10 || score == -10) return score;
    if (!isMovesLeft(board)) return 0;

    if (isMaximizing) 
    {
        int best = INT_MIN;
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j) 
            {
                if (board[i][j] != 'X' && board[i][j] != 'O') 
                {
                    char temp = board[i][j];
                    board[i][j] = botSymbol;
                    best = max(best, minimax(board, false));
                    board[i][j] = temp;
                }
            }
        }
        return best;
    }
    else {
        int best = INT_MAX;
        for (int i = 0; i < 3; ++i) 
        {
            for (int j = 0; j < 3; ++j) 
            {
                if (board[i][j] != 'X' && board[i][j] != 'O') 
                {
                    char temp = board[i][j];
                    board[i][j] = playerSymbol;
                    best = min(best, minimax(board, true));
                    board[i][j] = temp;
                }
            }
        }
        return best;
    }
}

int Bot::getMove(vector<vector<char>>& board) 
{
    if (difficulty == 1) 
    {
        int position;
        do {
            position = rand() % 9 + 1;
        } while (board[(position - 1) / 3][(position - 1) % 3] == 'X' || board[(position - 1) / 3][(position - 1) % 3] == 'O');
        return position;
    }

    if (difficulty == 3) 
    {
        for (int i = 0; i < 3; ++i) 
        {
            for (int j = 0; j < 3; ++j) 
            {
                if (board[i][j] != 'X' && board[i][j] != 'O') 
                {
                    char temp = board[i][j];
                    board[i][j] = botSymbol;
                    if (checkWin(board, botSymbol)) return (i * 3 + j + 1);
                    board[i][j] = temp;
                }
            }
        }

        for (int i = 0; i < 3; ++i) 
        {
            for (int j = 0; j < 3; ++j) 
            {
                if (board[i][j] != 'X' && board[i][j] != 'O') 
                {
                    char temp = board[i][j];
                    board[i][j] = playerSymbol;
                    if (checkWin(board, playerSymbol)) return (i * 3 + j + 1);
                    board[i][j] = temp;
                }
            }
        }

        vector<int> cornerMoves = { 1, 3, 7, 9 };
        for (int move : cornerMoves) 
        {
            int row = (move - 1) / 3;
            int col = (move - 1) % 3;
            if (board[row][col] != 'X' && board[row][col] != 'O') 
            {
                return move;
            }
        }

        if (board[1][1] != 'X' && board[1][1] != 'O') 
        {
            return 5;
        }

        return getMove(board);
    }


    if (difficulty == 2) 
    {
        int bestVal = INT_MIN;
        int bestMove = -1;

        for (int i = 0; i < 3; ++i) 
        {
            for (int j = 0; j < 3; ++j) 
            {
                if (board[i][j] != 'X' && board[i][j] != 'O') 
                {
                    char temp = board[i][j];
                    board[i][j] = botSymbol;
                    int moveVal = minimax(board, false);
                    board[i][j] = temp;

                    if (moveVal > bestVal) 
                    {
                        bestMove = (i * 3 + j + 1);
                        bestVal = moveVal;
                    }
                }
            }
        }
        return bestMove;
    }

    return -1;
}
