#include <iostream>
#include <cmath>
using namespace std;

string getDayOfWeek(int dayNum){
    string dayName;

    switch (dayNum)
    {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    
    default:
        dayName = "Invalid";
        break;
    }

    return dayName;
}

int main()
{
    
    cout<<getDayOfWeek(10)<<endl;
    return 0;
}