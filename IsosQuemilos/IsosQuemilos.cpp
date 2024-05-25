#include <iostream>
#include <conio.h>
#include "glbisosprog.h"

using namespace std;

int main()
{
    cout << "---[ISOS QUEMILOS]---\n"
        << "\n"
        << "   1. Calculator\n"
        << "   2. Read File\n"
        << "   3. Write to File\n"
        << "   4. Start Menu\n"
        << "   5. Settings \n"
        << "   6. Terminal\n"
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
//start menu daha eklenmedi
        break;
    case '5':
        settings();
//ayarlar daha eklenmedi
        break;
    case '6':
        terminal();
        break;
    default:
        cout << "Invalid option" << endl;
        break;
    }

    return 0;
}
