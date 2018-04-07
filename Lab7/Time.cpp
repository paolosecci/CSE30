#include "Time.h"

//default constructor
Time::Time()
{
    hour = 0;
    min = 0;
    sec = 0;
}
    
//3 argument constructor
Time::Time(int h, int m, int s)
{
    hour = h;
    min = m;
    sec = s;
}
    
//destructor
Time::~Time()
{
}


//getters
int Time::getHour()
    {
        return hour;
    }
int Time::getMin()
    {
        return min;
    }
int Time::getSec()
    {
        return sec;
    }
//setters
void Time::setHour(int h)
    {
        hour = h;
    }
void Time::setMin(int m)
    {
        min = m;
    }
void Time::setSec(int s)
    {
        sec = s;
    }
