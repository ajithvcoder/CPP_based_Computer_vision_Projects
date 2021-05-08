// g++ test.cpp Date.cpp -o out

#include <iostream>
//#include "Date.h"

using namespace std;

class Date
{
private:
    int m_year;
    int m_month;
    int m_day;
public:
    Date(int *year, int month, int day);
    void SetDate(int *year, int month, int day);
    int &getyear() { return m_year; }
    int getMonth() { return m_month; }
    int getDay() { return m_day; }

};
            // reciving with pointer variable *year
Date::Date(int *year, int month, int day)
{
    // taking year and passing to SetDate
    SetDate(year, month, day);
}
            // reciving with pointer variable *year
void Date::SetDate(int *year, int month, int day)
{
    m_month = month;
    m_day = day;
    // year is address
    // *year is value
    m_year = *year;
    cout<<year<<endl;
    cout<<*year<<endl;
}

int main()
{
    int year = 2020;
    int date = 30;
    int month = 04;
    int *pyear;
    pyear = &year;
    cout<<"address - value- "<<&year<<endl;
                //address
    Date myDate(pyear,month,date);
    //myDate.SetDate(2020,04,30);
    cout<<myDate.getMonth()<<endl;
    cout<<myDate.getyear()<<endl;
    return 0;
}