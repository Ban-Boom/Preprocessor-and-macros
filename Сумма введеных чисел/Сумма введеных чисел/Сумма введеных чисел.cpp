#include <iostream>

int main()
{
    int a;
    int sum = 0;
    std::cout << "Введите число" << std::endl;
    std::cin >> a;
    while (a != 0) {
        sum += a % 10;
        a /= 10;
    }
    std::cout << "Сумма = " << sum << std::endl;
    return 0;
}

