#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int i;
int p;

struct Node {
    string data;
    Node* next;

    Node(const string& d) : data(d), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void append(const string& data) {
        Node* newNode = new Node(data);

        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    int length() const {
        int count = 0;
        Node* current = head;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }

    int find(const string& value) const {
        Node* current = head;
        int index = 0;
        while (current != nullptr) {
            if (current->data == value) {
                return index;
            }
            current = current->next;
            index++;
        }
        return -1;
    }

    void display() const {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "null" << endl;
    }


    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};

int main() {
    setlocale(LC_ALL, "Rus");
    LinkedList list;
    int choice, p;
    string input;
    while (true) {
        cout << "\nМеню:\n";
        cout << "1. Добавить строку\n";
        cout << "2. Показать длину списка\n";
        cout << "3. Найти элемент\n";
        cout << "4. Показать все элементы\n";
        cout << "5. Выйти\n";
        cout << "6. Добавить строку с случайными элементами размерностью x\n" << std::endl;
        cout << "Выберите действие: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            cout << "Введите строку: ";
            getline(cin, input);
            list.append(input);
        }
        else if (choice == 2) {
            cout << "Длина списка: " << list.length() << endl;
        }
        else if (choice == 3) {
            cout << "Введите строку для поиска: ";
            getline(cin, input);
            int pos = list.find(input);
            if (pos != -1) {
                cout << "Найдено на позиции: " << pos << endl;
            }
            else {
                cout << "Не найдено!" << endl;
            }
        }
        else if (choice == 4) {
            cout << "Содержимое списка: ";
            list.display();
        }
        else if (choice == 5) {
            cout << "Выход..." << endl;
            break;
        }
        else if (choice == 6) {
            cout << std::endl << "Введите размерность x: ";
            std::cin >> p;
            for (i; i < p; i++) {
                input = to_string(rand() % 25);
                list.append(input);
                list.append(" ");


            }
        }
        else {
            cout << "Неверный выбор!" << endl;
        }
    }

    return 0;
}
