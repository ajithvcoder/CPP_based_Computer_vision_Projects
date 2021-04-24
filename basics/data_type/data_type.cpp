#include <iostream>

using namespace std;

int main()
{
    char grade = 'A';
    string phrase = "Giraffe Academy";
    int age = 50;
    double gpa = 2.4;
    bool isMale = true;

    cout << phrase[0] <<endl;
    cout << phrase.length() <<endl;
    cout << phrase.find("Academy",0)<<endl;
    cout << phrase.substr(8,3)<<endl;
    
    return 0;
}