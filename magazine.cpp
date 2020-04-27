#include "magazine.h"

Magazine::Magazine() : Publication()
{
    this->setMagazinIssue(1);
}
Magazine::Magazine(string const &publicationName, int const publicationYear_of_create, int const magazinIssue) : Publication(publicationName, publicationYear_of_create)
{
    this->setMagazinIssue(magazinIssue);
}
Magazine::Magazine(Magazine const &magazine) : Publication (magazine)
{
    this->setMagazinIssue(magazine.magazinIssue);
}

const bool Magazine::setMagazinIssue(int const magazinIssue)
{
    if(magazinIssue > 0)
    {
        this->magazinIssue = magazinIssue;
        return 1;
    }else{
        this->magazinIssue = 1;
        return 0;
    }
}
const unsigned int Magazine::getMagazinIssue() const
{
    return magazinIssue;
}

Magazine& Magazine::operator = (Magazine const &magazine)
{
    Publication::operator=(magazine);
    this->setMagazinIssue(magazine.magazinIssue);
    return *this;
}

void Magazine::print() const
{
    cout << "\nName: " << this->publicationName;
    cout << "\tYear: " << this->publicationYear_of_create;
    cout << "\tMagazinIssue: " << this->magazinIssue;
}

ostream& operator << (ostream &out, const Magazine &magazine)
{
    out << "\nName: " << magazine.publicationName;
    out << "\tYear: " << magazine.publicationYear_of_create;
    out << "\tMagazinIssue: " << magazine.magazinIssue;
    return out;
}

istream& operator >> (istream &in, Magazine &magazine)
{
    in >> magazine.publicationName;
    in >> magazine.publicationYear_of_create;
    int buf;
    in >> buf;
    magazine.setMagazinIssue(buf);
    return in;
}

