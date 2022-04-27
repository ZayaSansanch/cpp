#include <iostream>
using namespace std;

int main() {
    string text1;
    string bool_text1;

    while (bool_text1 != "true" && bool_text1 != "false") {
        cout << "true or false?" << "\n";
        cin >> bool_text1;
    }

    if (bool_text1 == "true") {
        text1 = "you type true";
    } if (bool_text1 == "false") {
        text1 = "you type false";
    }

    cout << text1 << "\n";
}