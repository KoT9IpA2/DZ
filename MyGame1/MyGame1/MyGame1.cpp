#include <iostream>
#include <vector>
#include "Bot.h"
#include "ChatBot.h"

using namespace std;

class MyGame1 
{
private:
    vector<vector<char>> board;
    char currentPlayer;
    Bot bot;
    ChatBot chat;

public:
    MyGame1(int botLevel) : bot('O', botLevel) 
    {
        board = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
        currentPlayer = 'X';
        cout << "Игра началась! Игрок X ходит первым." << endl;
    }

    void displayBoard() 
    {
        cout << endl;
        cout << "  ----+---+-----" << endl;
        for (int i = 0; i < 3; ++i) {
            cout << "  |";
            for (int j = 0; j < 3; ++j) {
                cout << " " << board[i][j] << " ";
                if (j < 2) cout << "|";
            }
            cout << " |" << endl;
            if (i < 2) cout << "  ----+---+-----" << endl;
        }
        cout << "  ----+---+-----" << endl;
        cout << endl;
    }



    bool isBoardFull() 
    {
        for (int i = 0; i < 3; ++i) 
        {
            for (int j = 0; j < 3; ++j) 
            {
                if (board[i][j] != 'X' && board[i][j] != 'O') return false;
            }
        }
        return true;
    }

    bool checkWin(char symbol) 
    {
        for (int i = 0; i < 3; ++i) 
        {
            if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) return true;  // Строки
            if (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol) return true;  // Столбцы
        }
        if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) return true;  // Главная диагональ
        if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol) return true;  // Победная диагональ
        return false;
    }

    void makeMove(int position) 
    {
        int row = (position - 1) / 3;
        int col = (position - 1) % 3;

        if (board[row][col] != 'X' && board[row][col] != 'O') 
        {
            board[row][col] = currentPlayer;
            chat.commentOnMove(position, currentPlayer);
        }
        else 
        {
            cout << "Эта клетка уже занята! Попробуйте снова." << endl;
        }
    }

    void botMove() 
    {
        

        vector<int> availableMoves;

        for (int i = 0; i < 3; ++i) 
        {
            for (int j = 0; j < 3; ++j) 
            {
                if (board[i][j] != 'X' && board[i][j] != 'O') 
                {
                    availableMoves.push_back(i * 3 + j + 1);
                }
            }
        }

        if (availableMoves.empty()) 
        {
            cout << "Ошибка: Бот не может сделать ход!" << endl;
            return;
        }

        int move = availableMoves[rand() % availableMoves.size()];

        int row = (move - 1) / 3;
        int col = (move - 1) % 3;
        board[row][col] = currentPlayer;

        chat.commentOnMove(move, currentPlayer);
    }

    void play() 
    {
        cout << "Запуск игры..." << endl;
        int position;
        while (!isBoardFull()) 
        {
            displayBoard();
            cout << "Текущий игрок: " << currentPlayer << endl;

            if (currentPlayer == 'X') 
            {
                cout << "Игрок X, введите номер клетки (1-9): ";
                cin >> position;
                cout << "Игрок X выбрал: " << position << endl;
                
                if (cin.fail()) 
                {
                    cin.clear();
                    cin.ignore(10000);
                    cout << "Ошибка! Введите число от 1 до 9." << endl;
                    continue;
                }

                if (position < 1 || position > 9) 
                {
                    cout << "Неверный ход! Попробуйте снова." << endl;
                    continue;
                }

                makeMove(position);

                if (checkWin('X')) 
                {
                    displayBoard();
                    cout << "Игрок X победил!" << endl;
                    return;
                }

                currentPlayer = 'O';
            }
            else 
            {
                cout << "Ход бота..." << endl;
                botMove();

                if (checkWin('O')) 
                {
                    displayBoard();
                    cout << "Бот победил!" << endl;
                    return;
                }

                currentPlayer = 'X';
            }
        }

        displayBoard();
        cout << "Ничья!" << endl;
    }
};

int main() 
{
    setlocale(LC_ALL, "Russian");
    int level;
    cout << "Выберите уровень сложности бота (1 - Легкий, 2 - Средний, 3 - Сложный): ";
    cin >> level;
    MyGame1 game(level);
    game.play();
    return 0;
}
