#include <iostream>
using namespace std;

void obch() {
    cout << "Проверим как вы поняли!" << "\n";
    cout << "а: да      б: Нет" << "\n";
}


void obch2() {
    cout << "Вам дают вопросы и варианты ответов, вы вводите букву ответа!" << "\n" << "\n";
}

int main() {
    cout << "Это тест!" << "\n" << "\n";

    cout << "Правила:" << "\n";
    obch2();

    obch();
    string ob;
    cin >> ob;
    if (ob == "а") {
        cout << "Верно!" << "\n" << "\n"; 
    } else {
        cout << "Не верно!" << "\n";
    }

    cout << "Есть несколько тестов:" << "\n";
}