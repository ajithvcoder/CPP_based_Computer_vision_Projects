#ifndef DATE_H
#define DATE_H 
using namespace std;

class Date
{
private:
    int m_year;
    int m_month;
    int m_day;
public:
    Date(int &year, int month, int day);
    void SetDate(int &year, int month, int day);
    int getyear() { return m_year; }
    int getMonth() { return m_month; }
    int getDay() { return m_day; }

};

#endif 