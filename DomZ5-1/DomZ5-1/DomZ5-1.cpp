#include <iostream>
#include "shapes.h"  
#include <string>

int main() {
    
    std::string input;
    std::cout << "Enter a shape (circle, square, triangle): ";
    std::cin >> input;

    
    Shapes::Shape myShape = Shapes::stringToShape(input);
    Shapes::printShape(myShape);

    return 0;
}
