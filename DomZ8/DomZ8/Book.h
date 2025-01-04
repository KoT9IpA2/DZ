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
    // Конструктор для инициализации всех полей
    Book(const std::string& title, const std::string& author, int year, const char* isbn);

    // Конструктор копирования
    Book(const Book& other);

    // Деструктор
    ~Book();

    // Геттеры
    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;
    const char* getISBN() const;

    // Метод для вывода информации о книге
    void printInfo() const;
};
#endif 
