#include <iostream>
#include "cpr/cpr.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    int in = -1;
    cpr::Response r;
    do{
        cout << "Enter command (1 - get, 2 - post, 3 - put, 4 - delete, 5 - patch, 0 - exit):";
        cin >> in;
        switch (in) {
            case 1:
                r = cpr::Get(cpr::Url("http://httpbin.org/get"));
                cout << r.text << endl;
                break;
            case 2:
                r = cpr::Post(cpr::Url("http://httpbin.org/post"), cpr::Payload({{"name", "Alex"}, {"family", "Zamoev"}}));
                cout << r.text << endl;
                break;
            case 3:
                r = cpr::Put(cpr::Url{"http://www.httpbin.org/put"}, cpr::Payload{{"name", "Alex"}});
                cout << r.text << endl;
                break;
            case 4:
                r = cpr::Delete(cpr::Url{"http://www.httpbin.org/delete"});
                cout << r.text << endl;
                break;
            case 5:
                r = cpr::Patch(cpr::Url{"http://www.httpbin.org/patch"},cpr::Payload{{"name", "Zamoev"}});
                cout << r.text << endl;
                break;
            case 0:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Incorrect input. Try again." << endl;
                break;
        }
    } while ((in != 0));

    return 0;
}

/*Реализуйте программу по осуществлению различных типов HTTP-запросов к сервису httpbin.org.

Пользователь взаимодействует с программой с помощью команд: «get», «post», «put», «delete», «patch».
 В зависимости от команды к серверу httpbin.org, осуществляется запрос того или иного типа.
 Содержимое ответа сервера выводится в стандартный вывод.

Программа завершается, когда пользователь вводит команду «ext».*/