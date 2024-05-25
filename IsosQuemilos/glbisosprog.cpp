#include "glbisosprog.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void calculator() {
    int num1, num2;
    char operation;

    cout << "Calculator selected. Please enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;
    switch (operation) {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        }
        else {
            cout << "You can't divide a number by 0." << endl;
        }
        break;
    default:
        cout << "Invalid operation" << endl;
    }
    system("pause");
}

void readFile() {
    string fileName, line;
    cout << "Read File selected. Please enter the file name: ";
    cin >> fileName;

    ifstream fileRead(fileName);

    if (!fileRead) {
        cerr << "File cannot be opened: " << fileName << endl;
        system("pause");
        return;
    }

    cout << "File opened. File content:" << endl;

    while (getline(fileRead, line)) {
        cout << line << endl;
    }

    fileRead.close();
    system("pause");
}

void writeFile() {
    string fileName, text;
    cout << "Write to File selected. Please enter the file name: ";
    cin >> fileName;

    ofstream fileWrite(fileName);

    if (!fileWrite) {
        cerr << "File cannot be created: " << fileName << endl;
        system("pause");
        return;
    }

    cout << "File opened. You can enter text. Press (Ctrl+Z)+Enter to end the text." << endl;

    cin.ignore();

    while (getline(cin, text)) {
        fileWrite << text << endl;
    }

    cout << "Text saved successfully." << endl;
    fileWrite.close();
    system("pause");
}

void settings() {
    cout << "Settings selected." << endl;
    system("pause");
}

void terminal() {
    string terminalChoice;
    system("cls");
    cout << "root@isosque ";
    cin >> terminalChoice;

    if (terminalChoice == "explorer") {
    }
    else if (terminalChoice == "calculator") {
        calculator();
    }
    else if (terminalChoice == "readfiles") {
        readFile();
    }
    else if (terminalChoice == "writefiles") {
        writeFile();
    }
    else {
        cout << "Invalid choice." << endl;
    }
    system("pause");
}
