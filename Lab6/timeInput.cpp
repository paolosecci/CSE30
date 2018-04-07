#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;

struct Time
{
    int hour;
    int min;
    int sec;
};

bool getTimeFromUser(Time &time)
{
    //get string input
    string input;
    getline(cin, input);
    
    //check irregularities
    if (input.length() != 8) return false;
    if (input.find(":") != 2) return false;
    if (input.find(":") != 5) return false;
    
    
    //turn string into ints and set to time.ints
    time.hour = atoi(input.substr(0, 2).c_str());
    time.min = atoi(input.substr(3, 2).c_str());
    time.sec = atoi(input.substr(6, 2).c_str());
    
    //check if logical time
    if (time.hour >= 24 || time.min >= 60 || time.sec >= 60)
    {
        cout << "The time entered is invalid";
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
    //cout << setfill ('0') << setw (2);
    cout << time.hour;
    cout << ":";
    
    //print min
    //cout << setfill ('0') << setw (2);
    cout << time.min;
    cout << ":";
    
    //print sec
    //cout << setfill ('0') << setw (2);
    cout << time.sec;
}

//main
int main()
{
    //declare vars
    Time startTime;
    Time endTime;
    
    
    //start
    cout << "enter start time (HH:MM:SS) ";
    if(getTimeFromUser(startTime))
    {
        cout << "the lecture starts at " << print24Hour(startTime) << endl;
    }
    
    //end
    cout << "enter end time (HH:MM:SS) ";
    if(getTimeFromUser(endTime))
    {
        cout << " and ends at " << print24Hour(endTime) << endl;
    }
    
    return 1;
}
