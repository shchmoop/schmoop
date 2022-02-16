#pragma once
#include <string>
using namespace std;
class courseType{
    public:
        //mutable methods - set
        void setTerm(string term);
        //...
        //acessor method
        string getTerm();
        //...
        
        //Constructor
        courseType();
        //Destructor
        ~courseType();
    
    protected:
        //tbd
    private:
        //data structure
        //11 different data
         string term = "";
         float year=0;
         string startDate= "";
         string endDate;
         string courseName= "";
         string classID= "";
         string section= "";
         string meetingDays= "";
         string location= "";
         string meetingInfo= "";
         string instructor= "";
        float units=0;
};
