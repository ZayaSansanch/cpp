#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int postr(int a, int b, int c, int d) {
    string stra[a];
    string strb[b];
    string strc[c];
    string strd[d];
    // string stra, strb, strc, strd;

    cout << "a: ";
    for (int i = 0; i < a; i++) {
        stra[i] = "@";

        if (i == a - 1) {
            cout << stra[i] << endl;
        } else {
            cout << stra[i];
        }
    }
    cout << "b: ";
    for (int i = 0; i < b; i++) {
        strb[i] = "@";

        if (i == b - 1) {
            cout << strb[i] << endl;
        } else {
            cout << strb[i];
        }
    }
    cout << "c: ";
    for (int i = 0; i < c; i++) {
        strc[i] = "@";

        if (i == c - 1) {
            cout << strc[i] << endl;
        } else {
            cout << strc[i];
        }
    }
    cout << "d: ";
    for (int i = 0; i < d; i++) {
        strd[i] = "@";

        if (i == d - 1) {
            cout << strd[i] << endl;
        } else {
            cout << strd[i];
        }
    }
    cout << endl;
    return(0);
}

void opr() {
    string s;
    ifstream file("D:\\testirtwotxt.txt");
    
    string name, testnum, chet, otvone, otvtwo, otvtree, otvfour;
    int otvonech, otvtwoch, otvtreech, otvfourch;

    int ii = 0;

    while (getline(file, s)) {
        // name = "";
        // testnum = "";
        // chet = "";
        // otvone = "";
        // otvtwo = "";
        // otvtree = "";
        // otvfour = "";
        for (int i = 0; i <= s.length(); i++) {
            if (s[i] != '^' && ii == 0) {
                name += s[i];
            } else if (s[i] == '^') {
                ii += 1;
            } else if (s[i] != '^' && ii == 1) {
                testnum += s[i];
            } else if (s[i] == '^') {
                ii += 1;
            } else if (s[i] != '^' && ii == 2) {
                chet += s[i];
            } else if (s[i] == '^') {
                ii += 1;
            } else if (s[i] != '^' && ii == 3) {
                otvone += s[i];
            } else if (s[i] == '^') {
                ii += 1;
            } else if (s[i] != '^' && ii == 4) {
                otvtwo += s[i];
            } else if (s[i] == '^') {
                ii += 1;
            } else if (s[i] != '^' && ii == 5) {
                otvtree += s[i]; 
            } else if (s[i] == '^') {
                ii += 1;
            } else if (s[i] != '^' && ii == 6) {
                otvfour += s[i];
            }
        }
        // cout << s << ":" << endl;
        cout << name << " " << testnum << "  " << chet << "  " << otvone << "  " << otvtwo << "  " << otvtree << "  " << otvfour << endl;
}

    file.close();

    // return (otvonech, otvtwoch, otvtreech, otvfourch);
}

int main() {
    int a = 3;
    int b = 1;
    int c = 4;
    int d = 2;

    // postr(a, b, c, d);

    opr();
}