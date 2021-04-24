#include <iostream>

using namespace std;

class Book{
    private:
        string rating;
    public:
        string title;
        string author;
        int pages;
        
        Book(string aTitle, string aAuthor, int aPages, string aRating){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
            setRating(aRating);
        }
        void setRating(string aRating){
            if (aRating == "PG-13" || aRating == "PG" || aRating == "NR"){
                rating = aRating;
            } else {
                rating = "NR";
            }
        }       
        string getRating(){
            return rating;
        } 

        bool bigBook(){
            if (pages >= 500){ 
                return true;
            }
            return false;
        }
};


int main()
{
    Book book1("Harry Potter","JK Rowling",400,"PG-13");
    // book1.title = "Harry potter";
    // book1.author = "JK Rowling";
    // book1.pages = 500;
    //Book book2;
    //Book book3("Lord of Rings","totem",600);
    cout<<book1.pages<<endl;
    //cout<<book2.pages<<endl;
    //cout<<book1.bigBook()<<endl;
    book1.setRating("Dontknow");
    cout<<book1.getRating()<<endl;
    return 0;
}