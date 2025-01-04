#include "Book.h"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    Book book1("Эффективный и современный С++", "Скотт Мейерс", 2014, "978-1491903995");
    book1.printInfo();

    Book book2 = book1;
    book2.printInfo();
 
    return 0;
}
