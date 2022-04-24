#include <iostream>
using namespace std;

int main() {
    string text1;
    string bool_text1;

    cout << "true or false?" << "\n";
    cin >> bool_text1;

    if (bool_text1 == "true") {
        text1 = "you type true";
    } if (bool_text1 == "false") {
        text1 = "you type false";
    } else {
        text1 = "wat you type?";
    }

    cout << text1 << "\n";
    
    // string ver;

    // cout << "wat version? (v1 or v2 or v3)" << "\n";
    // cin >> ver;

    // if (ver == "v1") {
    //     v1();
    // }
    // if (ver == "v2") {
    //     v2();
    // }
    // if (ver == "v3") {
    //     v3();
    // }
}

void v1() {
    string text1;
    string bool_text1;

    cout << "true or false?" << "\n";
    cin >> bool_text1;

    if (bool_text1 == "true") {
        text1 = "you type true";
    } if (bool_text1 == "false") {
        text1 = "you type false";
    } else {
        text1 = "wat you type?";
    }

    cout << text1 << "\n";
}

void v3() {
    string text1;
    string bool_text1;

    for (;;) {
        cout << "true or false?" << "\n";
        cin >> bool_text1;

        if (bool_text1 == "true") {
            text1 = "you type true";
        } if (bool_text1 == "false") {
            text1 = "you type false";
        } else {
            text1 = "wat you type?";
        }

        cout << text1 << "\n";
    }
}

void v2() {
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

// void v1() {
//     string text1;
//     string bool_text1;

//     cout << "true or false?" << "\n";
//     cin >> bool_text1;

//     if (bool_text1 == "true") {
//         text1 = "you type true";
//     } if (bool_text1 == "false") {
//         text1 = "you type false";
//     } else {
//         text1 = "wat you type?";
//     }

//     cout << text1 << "\n";
// }

// void v3() {
//     string text1;
//     string bool_text1;

//     for (;;) {
//         cout << "true or false?" << "\n";
//         cin >> bool_text1;

//         if (bool_text1 == "true") {
//             text1 = "you type true";
//         } if (bool_text1 == "false") {
//             text1 = "you type false";
//         } else {
//             text1 = "wat you type?";
//         }

//         cout << text1 << "\n";
//     }
// }

// void v2() {
//     string text1;
//     string bool_text1;

//     while (bool_text1 != "true" && bool_text1 != "false") {
//         cout << "true or false?" << "\n";
//         cin >> bool_text1;
//     }

//     if (bool_text1 == "true") {
//         text1 = "you type true";
//     } if (bool_text1 == "false") {
//         text1 = "you type false";
//     }

//     cout << text1 << "\n";
// }



// #include <iostream>
// using namespace std;

// int main() {
//     string text1;
//     string bool_text1;

//     while (bool_text1 != "true" && bool_text1 != "false") {
//         cout << "true or false?" << "\n";
//         cin >> bool_text1;
//     }

//     if (bool_text1 == "true") {
//         text1 = "you type true";
//     } if (bool_text1 == "false") {
//         text1 = "you type false";
//     }

//     cout << text1 << "\n";
// }