#include <iostream>
#include <string>

void printThings (const std::string& x, const std::string& y)
{
    std::cout << "My favourite color is " << x << std::endl;
    std::cout << "My favourite fruit is " << y << std::endl;
}

int main()
{
    std::string a = "yellow";
    std::string b = "apple";
    printThings(a, b);
    return 0;
}

/*
by adding 'string&' I make sure that my string won't duplicate again.
i added the string library because while we are dealing with string we should add it, they don't come with iostream
the output will be "My favourite color is yellow
                    My favourite fruit is apple"
*/
