#include <iostream>

using namespace std;

int main()
{
    int age = 20;
    cout << &age<<endl;
    int *pAge = &age;
    cout << *pAge<<endl;

    return 0;
}