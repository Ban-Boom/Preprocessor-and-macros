#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        int temp = b;
        b = c;
        c = temp;
    }

    std::cout << a << ", " << b << ", " << c << std::endl;

    return 0;
}