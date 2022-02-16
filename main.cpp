/**
* Author:
* Description: Lab 1 
* Date: Feb 14
*/

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "course.h"
#include "Header.h"

using namespace std;

char menu();

int main() {
    system("pwd");

    vector<courseType> list;
    readData(list);

    char ch = 'x';
    do {
        ch = menu();
        switch (ch) {
        case 'l':
            // function handler
            doDisplay(list);
            break;
        case 'v':
            doView(list);
            break;
        case 'a':
            doAdd(list);
            break;
        case 'e':
            doEdit(list);
            break;
        case 'd':
            doDelete(list);
            break;
        default:
            cout << "Please enter valid choice" << endl;
        }
    } while (ch != 'x');

    cout << "Exit the program" << endl;

    return 0; // exit the program successfully
}

/**
* Display application menu
*/
char menu() {
        
    cout << endl;

    cout << "Course Menu" << endl;
    cout << "=====================" << endl;
    cout << "l - Display list of courses" << endl;
    cout << "v - View course details" << endl;
    cout << "a - Add a course" << endl;
    cout << "e - Edit a course" << endl;
    cout << "d - Delete a course" << endl;
    cout << "x - Exit program" << endl << endl;
    cout << "Enter choice: ";
    char ch;
    cin >> ch;
    cout << endl;
    return ch;
}

