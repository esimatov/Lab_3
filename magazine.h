#pragma once
#include <string>
#include <iostream>
#include "publication.h"
using namespace std;
class Magazine : public Publication
{
protected:
    unsigned int magazinIssue;
public:
    Magazine();
    Magazine(string const &publicationName, int const publicationYear_of_create, int const magazinIssue);
    Magazine(Magazine const &magazine);
    bool setMagazinIssue(int const magazinIssue);
    const unsigned int getMagazinIssue() const;

    void print() const;

    Magazine& operator = (Magazine const &magazine);
    friend ostream& operator << (ostream &out, const Magazine &magazine);
    friend istream& operator >> (istream &in, Magazine &magazine);
};
