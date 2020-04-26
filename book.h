#pragma once
#include <string>
#include <iostream>
#include "publication.h"
using namespace std;
class Book : public Publication
{
protected:
    string bookAuthor;
    unsigned int bookCountPage;
public:
    Book();
    Book(string const &publicationName, int const publicationYear_of_create, string const &author, int const countPage);
    Book(Book const &otherBook);
    void setBookAuthor(string const &bookAuthor);
    const string& getBookAuthor() const;
    bool setBookCountPage(int const bookCountPage);
    const int getBookCountPage() const;

    void print() const;

    Book& operator = (Book const &otherBook);
    friend ostream& operator << (ostream &out, const Book &book);
    friend istream& operator >> (istream &in, Book &book);
};
