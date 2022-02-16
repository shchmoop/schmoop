/**
 * Utility functions - handler function for courseType
 */
#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "course.h"

using namespace std;

const string FILE_NAME = "courses.csv";

// Prototype functions...
void doDisplay(vector<courseType>& list);
void doView(vector<courseType>& list);
void doAdd(vector<courseType>& list);
void doEdit(vector<courseType>& list);
void doDelete(vector<courseType>& list);
void readData(vector<courseType>& list);
