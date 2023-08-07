#include <iostream>
using namespace std;

class Book
{
    // specify some attributes
  public:
    string title;
    string author;
    int pages;

    // constructor
    Book()
    {
        title = "no title";
        author = "no author";
        pages = 0;
    };
    Book(string title, string author, int aPapagesges)
    {
        this->title = title;
        this->author = author;
        this->pages = pages;
    }
};

int main()
{
    Book book1("Harry Potter", "JK Rowling", 500);
    cout << book1.title << endl;

    Book book2("Lord of the Rings", "Tolkein", 700);
    cout << book2.title << endl;

    Book book3;
    cout << book3.title << endl;

    return 0;
}