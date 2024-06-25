#include <iostream>

int main()
{
    int a; /*declearing the variable*/
    int b;
    int sum;

    std::cout << "Please enter a value" << std::endl;
    std::cin >> a;

    std::cout << "Enter a new value" << std::endl;
    std::cin >> b;

    sum = a + b;
    std::cout << "Your sum is " << sum << std::endl;
    return 0;
}

/*
"cin" takes the input from the user and informs the computer, meanwhile "cout" prints out on the screen
*/
