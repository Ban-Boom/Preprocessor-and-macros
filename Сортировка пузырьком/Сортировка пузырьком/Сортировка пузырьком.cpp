#include <iostream>

void bubbleSortReverse(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[10] = { 10, 1, 9, 2, 8, 3, 7, 4, 6, 5 };

    std::cout << "Массив до сортировки: ";
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }

    bubbleSortReverse(arr, 10);

    std::cout << "\nМассив после сортировки: ";
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}