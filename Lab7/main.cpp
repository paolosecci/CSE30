#include <iostream>
#include <cstdlib>
#include <string>
#include "Time.h"
using namespace std;

bool getTimeFromUser(Time &time)
{
    //get string input
    string input;
    getline(cin, input);
    
    //check faults in entry
    if (input.length() != 8)
    {
        cout << "The time entered is invalid" << endl;
        return false;
    }
    
    //turn string into ints and set times
    time.setHour(atoi(input.substr(0, 2).c_str()));
    time.setMin(atoi(input.substr(3, 2).c_str()));
    time.setSec(atoi(input.substr(6, 2).c_str()));
    
    //check if logical time
    if (time.getHour() >= 24 || time.getMin() >= 60 || time.getSec() >= 60)
    {
        cout << "The time entered is illogical" << endl;
        return false;
    }
    else
    {
        return true;
    }
}

int print24Hour(Time &time)
{
    //print hour
    if (time.getHour() < 10)
    {
        cout << "0";
    }
    cout << time.getHour() << ":";

    //print min
    if (time.getMin() < 10)
    {
        cout << "0";
    }
    cout << time.getMin() << ":";
    
    //print sec
    if (time.getSec() < 10)
    {
        cout << "0";
    }
    return time.getSec();
}

//main
int main()
{
    //declare vars
    Time startTime;
    Time endTime;
    bool isValidTime = true;
    
    //print stuff
    cout << "enter start time for the lecture (HH:MM:SS) ";
    if(!getTimeFromUser(startTime))
    {
        isValidTime = false;
    }
    cout << "enter end time for the lecture (HH:MM:SS) ";
    if(getTimeFromUser(endTime) && isValidTime)
    {
        cout << "the lecture starts at " << print24Hour(startTime);
        cout << " and ends at " << print24Hour(endTime) << endl;
    }
    
    return 1;
}
