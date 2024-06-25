#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>

class Circle
{

private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double getRadius()
    {
        return radius;
    }

    double setRadius(double r)
    {
        radius = radius + 5;
        return radius;
    }

    double area()
    {
        double result = M_PI * radius * radius;
        std::cout << "The area of the circle is " << result << std::endl;
        return result;
    }

    double circumference()
    {
        double result = 2 * M_PI * radius;
        std::cout << "The circumference is " << result << std::endl;
        return result;
    }
};

int main()
{

    double radius;
    std::cout << "Enter a radius value" << std::endl;
    std::cin >> radius;

    Circle circleObject(radius);
    std::cout << "Circle's area is " << circleObject.area() << std::endl;
    std::cout << "Circle's circumference is " << circleObject.circumference() << std::endl;

    double currentRadius = circleObject.getRadius();
    double newRadius = currentRadius + 5;
    std::cout << "New radius is " << newRadius << std::endl;

    circleObject.setRadius(newRadius);
    std::cout << "New circle's area is " << circleObject.area() << std::endl;
    std::cout << "New circle's circumference is " << circleObject.circumference() << std::endl;

    return 0;
}
