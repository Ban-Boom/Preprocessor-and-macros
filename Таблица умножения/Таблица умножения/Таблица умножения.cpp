#include <iostream>

int main()
{
    int V;
    std::cout << "Введите число" << std::endl;
    std::cin >> V;
    for (int x = 1; x <= 10; ++x)
    {
        std::cout << V << " * " << x << " = " << V * x << std::endl;
    }
    return 0;
}

