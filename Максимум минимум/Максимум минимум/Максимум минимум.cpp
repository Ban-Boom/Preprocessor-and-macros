#include <iostream>


int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int min = arr[0];
    int max = arr[0];

        std::cout << "Массив: ";
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    std::cout << std::endl;
    std::cout << "Минимальный элемент: " << min << std::endl;
    std::cout << "Максимальный элемент: " << max << std::endl;

    return 0;

}