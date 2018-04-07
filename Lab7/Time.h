#ifndef Time_h
#define Time_h

class Time
{
 private:
    int hour;
    int min;
    int sec;

 public:
    Time();
    Time(int h, int m, int s);
    ~Time();
    //getters
    int getHour();
    int getMin();
    int getSec();
    //setters
    void setHour(int h);
    void setMin(int m);
    void setSec(int s);

};//end Time

#endif
