#include <iostream>
#include <conio.h>
#include "glbisosprog.h"

using namespace std;

int main() {
    while (true) {
        cout << "---[ISOS QUEMILOS]---\n"
            << "\n"
            << "   1. Calculator\n"
            << "   2. Read File\n"
            << "   3. Write to File\n"
            << "   4. Start Menu\n"
            << "   5. Terminal\n"
            << "----------------------\n";

        char ch = _getch();
        switch (ch) {
        case '1':
            calculator();
            break;
        case '2':
            readFile();
            break;
        case '3':
            writeFile();
            break;
        case '4':
            cout << "---[Start Menu]---\n"
                << "|  1. Shutdown   |\n"
                << "------------------\n";
            ch = _getch(); // Kullanıcıdan tekrar giriş almak için
            switch (ch) {
            case '1':
                return 0; // Programdan çıkış
            default:
                cout << "Invalid option" << endl;
                system("pause");
                break;
            }
            break;
        case '5':
            terminal();
            break;
        default:
            cout << "Invalid option" << endl;
            system("pause");
            break;
        }
    }

    return 0;
}
