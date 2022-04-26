#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

void testone(string var, string name) {
    int testonec = 0;
    string otv, otvtwo, otvtree, otvfour;
    cout << endl << "Заися ..." << endl;
    cout << "A: Сусаныч         B: Сасаныч          C: Сунсаныч         D: Сансаныч" << endl;
    cin >> otv;
    if (otv == "d" || otv == "D") {
        testonec += 1;
    }

    cout << endl << "Какая игрушка есть у заи?" << endl;
    cout << "A: Пантера         B: Панда        C: Коала        D: Геккончик" << endl;
    cin >> otvtwo;
    if (otvtwo == "c" || otvtwo == "C") {
        testonec += 1;
    }

    cout << endl << "Придагается ..." << endl;
    cout << "A: Петух         B: Панда       C: Дедушка        D: Зая" << endl;
    cin >> otvtree;
    if (otvtree == "a" || otvtree == "A") {
        testonec += 1;
    }

    cout << endl << "Зая ... когда я говорю с заей по видео-связи" << endl;
    cout << "A: Лает         B: Крутит головой          C: Пикает        D: Вырывается из рук" << endl;
    cin >> otvfour;
    if (otvfour == "b" || otvfour == "B") {
        testonec += 1;
    }

    cout << "Вы набрали " << testonec << "/4 " << "очков!" << endl;

    std::ofstream out("D:\\testirtwotxt.txt", std::ios::app);
    string vartwo;
    if (out.is_open()) {
        if (var == "a" || var == "A") {
            vartwo = "Zaya";
        }
        out << name << "^" << vartwo << "^" << testonec << "^" << otv << "^" << otvtwo << "^" << otvtree << "^" << otvfour << "^" << std::endl;
    }
    out.close();     
}

void vari(string name) {
    cout << "Тесты:" << endl;
    cout << "A: Заися!" << endl;
    string var;
    cin >> var;

    if (var == "a" or var == "A") {
        cout << "Заися!" << endl;
        testone(var, name);
    } else {
        cout << "Wat you type?" << endl << endl;
        vari(name);
    }
}

string namee() {
    string name;

    cout << "Ваше имя?" << endl;
    cin >> name;

    while (name.find('^') != std::string::npos) {
        cout << "Такое имя нельзя использовать (недопустимый символ '^'). Ваше имя?"  << endl;
        cin >> name;
    }

    return name;
}

void prav() {
    cout << endl << "Это тест!" << endl << endl;
    cout << "Правила:" << endl;
    cout << "Вам дают вопросы и варианты ответов, вы вводите букву ответа!" << endl << endl;
}

int main() {
    string name;
    name = namee();

    prav();

    vari(name);
}