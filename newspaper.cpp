#include "Newspaper.h"

Newspaper::Newspaper() : Publication()
{
    this->setNewspaperFormat("F3");
    this->setNewspaperIsColored(false);
}
Newspaper::Newspaper(string const &publicationName, int const publicationYear_of_create, string const &newspaperFormat, bool const newspaperIsColored) : Publication(publicationName, publicationYear_of_create)
{
    this->setNewspaperFormat(newspaperFormat);
    this->setNewspaperIsColored(newspaperIsColored);
}
Newspaper::Newspaper(Newspaper const &newspaper) : Publication (newspaper)
{
    this->setNewspaperFormat(newspaper.newspaperFormat);
    this->setNewspaperIsColored(newspaper.newspaperIsColored);
}

void Newspaper::setNewspaperFormat(string const &newspaperFormat)
{
    this->newspaperFormat = newspaperFormat;
}
const string& Newspaper::getNewspaperFormat() const
{
    return newspaperFormat;
}

void Newspaper::setNewspaperIsColored(bool const newspaperIsColored)
{
    this->newspaperIsColored = newspaperIsColored;
}
const bool Newspaper::getNewspaperIsColored() const
{
    return newspaperIsColored;
}

Newspaper& Newspaper::operator = (Newspaper const &newspaper)
{
    Publication::operator=(newspaper);
    this->setNewspaperFormat(newspaper.newspaperFormat);
    this->setNewspaperIsColored(newspaper.newspaperIsColored);
    return *this;
}

void Newspaper::print() const
{
    cout << "\nName: " << this->publicationName;
    cout << "\tYear: " << this->publicationYear_of_create;
    cout << "\tNewspaperFormat: " << this->newspaperFormat;
    cout << "\tNewspaperIsColored: " << this->newspaperIsColored;
}

ostream& operator << (ostream &out, const Newspaper &newspaper)
{
    out << "\nName: " << newspaper.publicationName;
    out << "\tYear: " << newspaper.publicationYear_of_create;
    out << "\tNewspaperFormat: " << newspaper.newspaperFormat;
    out << "\tNewspaperIsColored: " << newspaper.newspaperIsColored;
    return out;
}

istream& operator >> (istream &in, Newspaper &newspaper)
{
    in >> newspaper.publicationName;
    in >> newspaper.publicationYear_of_create;
    in >> newspaper.newspaperFormat;
    in >> newspaper.newspaperIsColored;
    return in;
}

