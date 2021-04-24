#include <iostream>

using namespace std;

void sayHi(string name, int age){
    cout<<"Hello "<<name<< " You are "<<age<<endl;
}

int main()
{
    cout<<"Top";
    sayHi("Ajith",25);
    cout<<"bottom";
    return 0;
}