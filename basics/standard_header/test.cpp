// g++ test.cpp Date.cpp -o out

#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    int year = 2020;
    int date = 30;
    int month = 04;
    Date myDate(&year,date,month);
    //myDate.SetDate(2020,04,30);
    cout<<myDate.getMonth()<<endl;
    return 0;
}