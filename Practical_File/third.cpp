//Program to create a Constructor and Destructor
#include<iostream>
using namespace std;

class Book
{
    public:
        string title, author;
        int pages;
        Book()
        {
            cout<< "Default Constructor called"<< endl<< endl;
            title = "Harry Potter";
            author = "J. K. Rowling";
            pages = 500;
        }
        Book(string aTitle, string aAuthor, int aPages)
        {
            cout<< "Parametrized Constructor called"<< endl<< endl;
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
        ~Book()
        {
            cout<< "Destructor called for Book "<< title<< " called"<< endl;
        }
};

int main()
{
    Book book1;
    cout<< "Book Title: "<< book1.title<< endl;
    cout<< "Book Author: "<< book1.author<< endl;
    cout<< "Book Pages: "<< book1.pages<< endl<< endl;

    Book book2("War and Peace", "Leo Tolstoy", 499);
    cout<< "Book Title: "<< book2.title<< endl;
    cout<< "Book Author: "<< book2.author<< endl;
    cout<< "Book Pages: "<< book2.pages<< endl;
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
}
