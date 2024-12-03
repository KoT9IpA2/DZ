#ifndef SHAPES_H
#define SHAPES_H
#include <string>

namespace Shapes {
    // ������������ �����
    enum Shape {
        CIRCLE,
        SQUARE,
        TRIANGLE
    };

    // ������� ��� ������ �������� ������
    void printShape(Shape shape);

    // ������� ��� �������������� ������ � Shape
    Shape stringToShape(const std::string& shapeStr);
}

#endif 