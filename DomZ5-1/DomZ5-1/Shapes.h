#ifndef SHAPES_H
#define SHAPES_H
#include <string>

namespace Shapes {
    // Перечисление фигур
    enum Shape {
        CIRCLE,
        SQUARE,
        TRIANGLE
    };

    // Функция для вывода названия фигуры
    void printShape(Shape shape);

    // Функция для преобразования строки в Shape
    Shape stringToShape(const std::string& shapeStr);
}

#endif 