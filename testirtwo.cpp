#include <iostream>
using namespace std;

void testone() {
    int testonec = 0;
    string otv, otvtwo;
    cout << "Заися ..." << "\n";
    cout << "A: Сусаныч         B: Сасаныч          C: Сунсаныч         D: Сансаныч" << "\n";
    cin >> otv;
    if (otv == "d" || otv == "D") {
        testonec += 1;
    }

    cout << "Какая игрушка есть у заи?" << "\n";
    cout << "A: Пантера         B: Панда        C: Коала        D: Геккончик" << "\n";
    cin >> otvtwo;
    if (otvtwo == "c" || otvtwo == "C") {
        testonec += 1;
    }

    cout << "Вы набрали " << testonec << " очков!" << "\n";
}

void vari() {
    cout << "Тесты:" << "\n";
    cout << "A: Заися!" << "\n";
    string var;
    cin >> var;

    if (var == "a" or var == "A") {
        cout << "Заися!" << "\n" << "\n";
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