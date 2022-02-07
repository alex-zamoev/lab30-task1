#include <iostream>
#include "cpr/cpr.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    int in = -1;
    do{
        cout << "Enter command (1 - get, 2 - post, 3 - put, 4 - delete, 5 - patch, 0 - exit):";
        cin >> in;
        switch (in) {
            case 1:
                cout << "" << endl;
                break;
            case 2:
                cout << "" << endl;
                break;
            case 3:
                cout << "" << endl;
                break;
            case 4:
                cout << "" << endl;
                break;
            case 5:
                cout << "" << endl;
                break;
            case 0:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Incorrect input. Try again." << endl;
                break;
        }
    } while ((in != 0));

    cpr::Response r = cpr::Post(cpr::Url("http://httpbin.org/post"), cpr::Payload({{"Alex", "Zamoev"}}));
    std::cout << r.text << std::endl;
    return 0;
}

/*Реализуйте программу по осуществлению различных типов HTTP-запросов к сервису httpbin.org.

Пользователь взаимодействует с программой с помощью команд: «get», «post», «put», «delete», «patch».
 В зависимости от команды к серверу httpbin.org, осуществляется запрос того или иного типа.
 Содержимое ответа сервера выводится в стандартный вывод.

Программа завершается, когда пользователь вводит команду «ext».*/