#include <iostream>

void F (int n) {
    int first = 0, second = 1, next;

        for (int i = 0; i < n; ++i) {
            if (i <= 1) {
                next = i;
            }
            else {
                next = first + second;
                first = second;
                second = next;
            }
            std::cout << next << " ";
        }
}
int main() {
    int n;
        std::cout << "Введите количество чисел: " << std::endl;
    std::cin >> n;
    F(n);
    return 0;
}
