#include <iostream>
#include "shapes.h" 

namespace Shapes 
{
    void Shapes::printShape(Shape shape) {
        switch (shape) {
        case CIRCLE:
            std::cout << "Circle" << std::endl;
            break;
        case SQUARE:
            std::cout << "Square" << std::endl;
            break;
        case TRIANGLE:
            std::cout << "Triangle" << std::endl;
            break;
        default:
            std::cout << "Unknown shape" << std::endl;
        }
    }

    // Реализация функции stringToShape
    Shape stringToShape(const std::string& shapeStr) {
        if (shapeStr == "circle") {
            return CIRCLE;
        }
        else if (shapeStr == "square") {
            return SQUARE;
        }
        else if (shapeStr == "triangle") {
            return TRIANGLE;
        }
        else {
            // Если строка не соответствует ни одной фигуре, возвращаем CIRCLE по умолчанию
            return CIRCLE;
        }
    }
}
