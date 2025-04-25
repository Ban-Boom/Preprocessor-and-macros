#pragma once
class Singleton {
public: //  �������� ��������� ��� ������������ ������
    static Singleton* instance;

    Singleton() {
        std::cout << "Singleton ������.\n";
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
        std::cout << " �������� � Singleton.\n";
    }
};

