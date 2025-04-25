#pragma once
class Singleton {
public: //  ВРЕМЕННО публичный для демонстрации взлома
    static Singleton* instance;

    Singleton() {
        std::cout << "Singleton создан.\n";
    }

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    static Singleton* getInstance() {
        if (!instance) {
            instance = new Singleton();
        }
        return instance;
    }
    void doSomething() {
        std::cout << " Работаем с Singleton.\n";
    }
};

