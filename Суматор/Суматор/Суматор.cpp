#include <iostream>

int main() {
    int i;
    int sum = 0;
    do
    {
        std::cout << "Введите число" << std::endl;
        std::cin >> i;
        sum += i;
    } 
    while (i != 0);
    {
        std::cout << "Сумма = " << sum << std::endl;
    }
        return 0;
}
