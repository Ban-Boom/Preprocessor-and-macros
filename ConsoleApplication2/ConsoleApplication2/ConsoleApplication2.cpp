#include <iostream>
#include <clocale>
#include "Singleton.h"

// Инициализация статической переменной
Singleton* Singleton::instance = nullptr;

int main() {
    setlocale(LC_ALL, "Russian");

    std::cout << " Демонстрация взлома Singleton\n";

    //  ВЗЛОМ: создаём второй экземпляр вручную
    Singleton* hacked = new Singleton();

    Singleton* s1 = Singleton::getInstance();
    s1 -> doSomething();

    // Сравним два указателя
    if (s1 != hacked) {
        std::cout << " Взлом удался: два разных экземпляра Singleton!\n";
    }
    else {
        std::cout << " Всё работает правильно: один экземпляр.\n";
    }

    return 0;
}
