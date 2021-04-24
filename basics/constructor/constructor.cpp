#include <iostream>

using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;
        Book(){
            title = "no title";
            author = "no author";
            pages =0;
        }
        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};


int main()
{
    Book book1("Harry Potter","JK Rowling",500);
    // book1.title = "Harry potter";
    // book1.author = "JK Rowling";
    // book1.pages = 500;
    Book book2;
    cout<<book1.pages<<endl;
    cout<<book2.pages<<endl;
    
    return 0;
}