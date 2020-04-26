#include "book.h"

Book::Book() : Publication()
{
    this->setBookAuthor("");
    this->setBookCountPage(2000);
}
Book::Book(string const &publicationName, int const publicationYear_of_create, string const &bookAuthor, int const bookCountPage) : Publication(publicationName, publicationYear_of_create)
{
    this->setBookAuthor(bookAuthor);
    this->setBookCountPage(bookCountPage);
}
Book::Book(Book const &otherBook) : Publication (otherBook)
{
    this->setBookAuthor(otherBook.bookAuthor);
    this->setBookCountPage(otherBook.bookCountPage);
}

void Book::setBookAuthor(string const &bookAuthor)
{
    this->bookAuthor = bookAuthor;
}
const string& Book::getBookAuthor() const
{
    return bookAuthor;
}

bool Book::setBookCountPage(int const bookCountPage)
{
    if (bookCountPage >= 0)
    {
        this->bookCountPage = bookCountPage;
        return 1;
    }else{
        this->bookCountPage = 0;
        return 0;
    }
}
const int Book::getBookCountPage() const
{
    return bookCountPage;
}

Book& Book::operator = (Book const &otherBook)
{
    Publication::operator=(otherBook);
    this->setBookAuthor(otherBook.bookAuthor);
    this->setBookCountPage(otherBook.bookCountPage);
    return *this;
}

void Book::print() const
{
    cout << "\nName: " << this->publicationName;
    cout << "\tYear: " << this->publicationYear_of_create;
    cout << "\tAuthor: " << this->bookAuthor;
    cout << "\tCountPage: " << this->bookCountPage;
}

ostream& operator << (ostream &out, const Book &book)
{
    out << "\nName: " << book.publicationName;
    out << "\tYear: " << book.publicationYear_of_create;
    out << "\tAuthor: " << book.bookAuthor;
    out << "\tCountPage: " << book.bookCountPage;
    return out;
}

istream& operator >> (istream &in, Book &book)
{
    in >> book.publicationName;
    in >> book.publicationYear_of_create;
    in >> book.bookAuthor;
    int buf;
    in >> buf;
    book.setBookCountPage(buf);
    return in;
}

