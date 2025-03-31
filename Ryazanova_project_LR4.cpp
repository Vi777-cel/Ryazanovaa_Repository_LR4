#include <iostream>
#include <map>
#include <string>
#include <functional>
using namespace std;

// Структура для меню
class MenuItem {
public:
    string title; // Название пункта
    function<void()> action; // Действие, связанное с пунктом меню
};

// Функция для ввода объема информации в байтах
void inputBytes() {
    long long bytes;
    cout << "Введите объем информации в байтах: ";
    cin >> bytes;
    cout << "Вы ввели: " << bytes << " байт." << endl;
}

// Функция для преобразования байтов в мегабайты
void bytesToMegabytes() {
    
}

// Функция для преобразования байтов в гигабайты
void bytesToGigabytes() {
    
}

int main() {
    map<int, MenuItem> menu = {
        {1, {"Ввести объем информации в байтах B", inputBytes}},
        {2, {"Выразить объем B в мегабайтах", bytesToMegabytes}},
        {3, {"Выразить объем B в гигабайтах", bytesToGigabytes}},
    };
    
    int choice = -1;

    while (true) {
        cout << "\nМеню:" << endl;

        // Вывод
        for (const auto& item : menu) {
            cout << "Task " << item.first << ". " << item.second.title << endl;
        }
        cout << "0. Выход" << endl;

        // Получаем выбор пользователя
        cout << "Выберите пункт меню: ";
        cin >> choice;

        // Выход из программы, если выбран 0
        if (choice == 0) {
            cout << "2025 Viktoria Ryazanova" << endl; 
            break;
        }

        // Проверка, существует ли выбранный пункт меню
        if (menu.find(choice) != menu.end()) {
            menu[choice].action(); // Вызов действия
        } else {
            cout << "Некорректный ввод. Пожалуйста, выберите пункт из меню." << endl; 
        }
    }
    
    return 0;
}
