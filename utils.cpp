#include <iostream>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "Header.h"

using namespace std;

/**
 * Function display list of courses
 */
void doDisplay(vector<courseType>& list) {
    cout << "" << endl;}

void doView(vector<courseType>& list) {
    cout << "doView - todo" << endl;
}

void doAdd(vector<courseType>& list) {
    cout << "doAdd - todo" << endl;
}

void doEdit(vector<courseType>& list) {
    cout << "doEdit - todo" << endl;
}

void doDelete(vector<courseType>& list) {
    cout << "doDelete - todo" << endl;
}

void readData(vector<courseType>& list) {

    ifstream inFile;
    fstream fin;
    inFile.open(FILE_NAME);
    string line = "";
    while (getline(inFile, line)) {
        stringstream ss(line);
        
}
}
