#include <iostream>

using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;
};


int main()
{
    Book book1;
    book1.title = "Harry potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    cout<<book1.pages<<endl;
    
    return 0;
}