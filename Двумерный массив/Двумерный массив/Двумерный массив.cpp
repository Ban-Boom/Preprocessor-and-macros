#include <iostream>

int main() {
    int arr[3][6] = 
    {
    {1, 2, 3, 4, 5, 6},
    {7, 8, 9, 10, 11, 12},
    {13, 14, 15, 16, 17, 18}
    };
        std::cout << "Элементы массива:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    int min = arr[0][0];
    int max = arr[0][0];
    int min_i = 0;
    int min_j = 0;
    int max_i = 0;
    int max_j = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
                min_i = i;
                min_j = j;
            }
            if (arr[i][j] > max) {
                max = arr[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }
    std::cout << "Минимальный элемент: " << min << " с индексами (" << min_i << ", " << min_j << ")" << std::endl;
    std::cout << "Максимальный элемент: " << max << " с индексами (" << max_i << ", " << max_j << ")" << std::endl;
    return 0;

}
