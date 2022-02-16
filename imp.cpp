#include <string>
#include "course.h"

using namespace std;

courseType::courseType() {
    term = "";
    year = 0;
    startDate = "";
    endDate = "";
    courseName = "";
    classID = "";
    section = "";
    meetingDays = "";
    location = "";
    meetingInfo = "";
    instructor = "";
    units = 0;
}
courseType::~courseType() {

}

/**
 * Function setTerm ...
 */
void courseType::setTerm(string term) {

}

// accessor methods - get
string courseType::getTerm() {
    return this->term;
}
