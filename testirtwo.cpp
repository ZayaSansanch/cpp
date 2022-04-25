#include <iostream>
using namespace std;

void testone() {
    int testonec = 0;
    string otv, otvtwo, otvtree, otvfour;
    cout << "\n" << "Заися ..." << "\n";
    cout << "A: Сусаныч         B: Сасаныч          C: Сунсаныч         D: Сансаныч" << "\n";
    cin >> otv;
    if (otv == "d" || otv == "D") {
        testonec += 1;
    }

    cout << "\n" << "Какая игрушка есть у заи?" << "\n";
    cout << "A: Пантера         B: Панда        C: Коала        D: Геккончик" << "\n";
    cin >> otvtwo;
    if (otvtwo == "c" || otvtwo == "C") {
        testonec += 1;
    }

    cout << "\n" << "Придагается ..." << "\n";
    cout << "A: Петух         B: Панда       C: Дедушка        D: Зая" << "\n";
    cin >> otvtree;
    if (otvtree == "a" || otvtree == "A") {
        testonec += 1;
    }

    cout << "\n" << "Зая ... когда я говорю с заей по видео-связи" << "\n";
    cout << "A: Лает         B: Крутит головой          C: Пикает        D: Вырывается из рук" << "\n";
    cin >> otvfour;
    if (otvfour == "b" || otvfour == "B") {
        testonec += 1;
    }

    cout << "Вы набрали " << testonec << "/4 " << "очков!" << "\n";
}

void vari() {
    cout << "Тесты:" << "\n";
    cout << "A: Заися!" << "\n";
    string var;
    cin >> var;

    if (var == "a" or var == "A") {
        cout << "Заися!" << "\n";
        testone();
    } else {
        cout << "Wat you type?" << "\n" << "\n";
        vari();
    }
}

int main() {
    cout << "Это тест!" << "\n" << "\n";

    cout << "Правила:" << "\n";
    cout << "Вам дают вопросы и варианты ответов, вы вводите букву ответа!" << "\n" << "\n";

    vari();
}