#include "Book.h"
#include <iostream>
#include <cstring>

    Book::Book(const std::string& title, const std::string& author, int year, const char* isbn) : title(title), author(author), year(year)
    {
     
        this->isbn = new char[strlen(isbn) + 1];
        strcpy_s(this->isbn, strlen(isbn) + 1, isbn);
    }

    Book::Book(const Book& other) : title(other.title), author(other.author), year(other.year)
    {
        isbn = new char[strlen(other.isbn) + 1];
        strcpy_s(isbn, strlen(isbn) + 1, isbn);
    }

    Book::~Book() 
    {
        delete[] isbn;
    }

    std::string Book::getTitle() const 
    {
        return title;
    }

    std::string Book::getAuthor() const 
    {
        return author;
    }

    int Book::getYear() const 
    {
        return year;
    }

    const char* Book::getISBN() const 
    {
        return isbn;
    }

    void Book::printInfo() const 
    {
        std::cout << "Название: " << title << std::endl;
        std::cout << "Автор: " << author << std::endl;
        std::cout << "Год: " << year << std::endl;
        std::cout << "ISBN: " << isbn << std::endl;
    }