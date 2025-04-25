#include <iostream>

int main() {
    int x;
    short y;
    long z;
    long long a;
    float b;
    double c;
    long double d;
    bool e;

    std::cout << "int address: " << &x << ". " << sizeof(x) << " bytes" << std::endl;
    std::cout << "short address: " << &y << ". " << sizeof(y) << " bytes" << std::endl;
    std::cout << "long address: " << &z << ". " << sizeof(z) << " bytes" << std::endl;
    std::cout << "long long address: " << &a << ". " << sizeof(a) << " bytes" << std::endl;
    std::cout << "float address: " << &b << ". " << sizeof(b) << " bytes" << std::endl;
    std::cout << "double address: " << &c << ". " << sizeof(c) << " bytes" << std::endl;
    std::cout << "long double address: " << &d << ". " << sizeof(d) << " bytes" << std::endl;
    std::cout << "bool address: " << &e << ". " << sizeof(e) << " bytes" << std::endl;

    return 0;
}