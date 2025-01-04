#pragma once
#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;
    char* isbn;

public:
    // ����������� ��� ������������� ���� �����
    Book(const std::string& title, const std::string& author, int year, const char* isbn);

    // ����������� �����������
    Book(const Book& other);

    // ����������
    ~Book();

    // �������
    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;
    const char* getISBN() const;

    // ����� ��� ������ ���������� � �����
    void printInfo() const;
};
#endif 
