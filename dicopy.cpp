#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int dione = 3;
    int ditwo = 1;
    int ditre = 4;
    int difor = 2;

    string strdione[dione];
    string strditwo[ditwo];
    string strditre[ditre];
    string strdifor[difor];
    // string strdione, strditwo, strditre, strdifor;

    cout << "dione: ";
    for (int i = 0; i < dione; i++) {
        strdione[i] = "a";

        if (i == dione - 1) {
            cout << strdione[i] << "\n";
        } else {
            cout << strdione[i];
        }
    }
    cout << "ditwo: ";
    for (int i = 0; i < ditwo; i++) {
        strditwo[i] = "a";

        if (i == ditwo - 1) {
            cout << strditwo[i] << "\n";
        } else {
            cout << strditwo[i];
        }
    }
    cout << "ditre: ";
    for (int i = 0; i < ditre; i++) {
        strditre[i] = "a";

        if (i == ditre - 1) {
            cout << strditre[i] << "\n";
        } else {
            cout << strditre[i];
        }
    }
    cout << "difor: ";
    for (int i = 0; i < difor; i++) {
        strdifor[i] = "a";

        if (i == difor - 1) {
            cout << strdifor[i] << "\n";
        } else {
            cout << strdifor[i];
        }
    }
}