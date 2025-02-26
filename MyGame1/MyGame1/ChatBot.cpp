#include "ChatBot.h"
#include <iostream>

ChatBot::ChatBot() {}

void ChatBot::greetPlayer() 
{
    cout << " Бот: Привет! Готов сыграть в крестики-нолики? Давай посмотрим, кто победит! " << endl;
}

string ChatBot::getResponse(string message) 
{
    if (message.find("как дела") != string::npos) return " Бот: У меня всё отлично! Готов к игре? ";
    if (message.find("привет") != string::npos) return " Бот: Привет, игрок! ";
    if (message.find("ты сильный") != string::npos) return " Бот: На 3 уровне я просто монстр!  Попробуй победить!";
    return " Бот: Интересно! Но давай лучше играть! ";
}

void ChatBot::commentOnMove(int position, char player) 
{
    if (player == 'X') 
    {
        cout << " Бот: Ты выбрал клетку " << position << ". Интересный ход!" << endl;
    }
    else {
        cout << " Бот: Я хожу в клетку " << position << ". Попробуй меня обыграть! " << endl;
    }
}

void ChatBot::commentOnWin(char winner) 
{
    if (winner == 'X') 
    {
        cout << " Бот: Поздравляю! Ты выиграл!  Было весело!" << endl;
    }
    else if (winner == 'O') 
    {
        cout << " Бот: Я победил!  Может, реванш?" << endl;
    }
    else {
        cout << " Бот: Ничья! Неплохо сыграно. Давай еще раз? " << endl;
    }
}
