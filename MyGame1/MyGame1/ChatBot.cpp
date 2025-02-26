#include "ChatBot.h"
#include <iostream>

ChatBot::ChatBot() {}

void ChatBot::greetPlayer() 
{
    cout << " ���: ������! ����� ������� � ��������-������? ����� ���������, ��� �������! " << endl;
}

string ChatBot::getResponse(string message) 
{
    if (message.find("��� ����") != string::npos) return " ���: � ���� �� �������! ����� � ����? ";
    if (message.find("������") != string::npos) return " ���: ������, �����! ";
    if (message.find("�� �������") != string::npos) return " ���: �� 3 ������ � ������ ������!  �������� ��������!";
    return " ���: ���������! �� ����� ����� ������! ";
}

void ChatBot::commentOnMove(int position, char player) 
{
    if (player == 'X') 
    {
        cout << " ���: �� ������ ������ " << position << ". ���������� ���!" << endl;
    }
    else {
        cout << " ���: � ���� � ������ " << position << ". �������� ���� ��������! " << endl;
    }
}

void ChatBot::commentOnWin(char winner) 
{
    if (winner == 'X') 
    {
        cout << " ���: ����������! �� �������!  ���� ������!" << endl;
    }
    else if (winner == 'O') 
    {
        cout << " ���: � �������!  �����, ������?" << endl;
    }
    else {
        cout << " ���: �����! ������� �������. ����� ��� ���? " << endl;
    }
}
