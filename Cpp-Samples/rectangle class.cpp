#include <iostream>

class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h)
    {
        width = w;
        height = h;
    }

    double area()
    {
        double result = width * height;
        std::cout << "The area is " << result << std::endl;
        return result;
    }

    double perimeter()
    {
        double result = 2 * (width + height);
        std::cout << "The perimeter is " << result << std::endl;
        return result;
    }
};

class Square : public Rectangle
{
public:
    Square(double side) : Rectangle(side, side) {}
};

int main()
{
    double width, height;
    std::cout << "Enter your width" << std::endl;
    std::cin >> width;
    std::cout << "Enter your height" << std::endl;
    std::cin >> height;

    Rectangle rectObject(width, height);
    std::cout << "For a rectangle the area is " << rectObject.area() << std::endl;
    std::cout << "For rectangle the perimeter is " << rectObject.perimeter() << std::endl;

    if (width == height)
    {
        Square sqObject(width);
        std::cout << "As width and height are equal, it's a square. The area is " << sqObject.area() << std::endl;
        std::cout << "The perimeter is " << sqObject.perimeter() << std::endl;
    }
    else
    {
        std::cout << "Width and height are not equal. It's not a square." << std::endl;
    }
    return 0;
}
/*
we did write double width and height again because we already have them in the class
but the thing is that we need to get the values from the user
so we need to write them again in the main function
*/
