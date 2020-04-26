#pragma once
#include <string>
#include <iostream>
#include "publication.h"
using namespace std;
class Newspaper : public Publication
{
protected:
    string newspaperFormat;
    bool newspaperIsColored;
public:
    Newspaper();
    Newspaper(string const &publicationName, int const publicationYear_of_create, string const &newspaperFormat, bool const newspaperIsColored);
    Newspaper(Newspaper const &newspaper);
    void setNewspaperFormat(string const &newspaperFormat);
    const string& getNewspaperFormat() const;
    void setNewspaperIsColored(bool const newspaperIsColored);
    const bool getNewspaperIsColored() const;

    void print() const;

    Newspaper& operator = (Newspaper const &newspaper);
    friend ostream& operator << (ostream &out, const Newspaper &newspaper);
    friend istream& operator >> (istream &in, Newspaper &newspaper);
};
