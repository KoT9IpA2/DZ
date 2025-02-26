#ifndef CHATBOT_H
#define CHATBOT_H

#include <string>
using namespace std;

class ChatBot 
{
public:
    ChatBot();
    void greetPlayer();
    string getResponse(string message);
    void commentOnMove(int position, char player);
    void commentOnWin(char winner);
};

#endif
