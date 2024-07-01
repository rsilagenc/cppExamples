#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {0, 1, 2, 3};
    std::vector<int> a;

    for (int i = 0; i < 10; ++i)
    {
        a.push_back(i);
    }

    std::cout << "Vector a: ";
    for (int i = 0; i < a.size(); ++i)
    {
        std::cout << a[i] << " ";
    }

    std::cout << ' ' << std::endl;

    std::cout << "Vector v: ";
    for (int n : v)
    {
        std::cout << n << ' ';
    }

    std::cout << ' ' << std::endl;

    std::cout << "Difference between vector a and vector v: ";
    for (int diff : a)
    {
        if (std::find(v.begin(), v.end(), diff) == v.end())
        {
            std::cout << diff << " ";
        }
    }

    return 0;
}
