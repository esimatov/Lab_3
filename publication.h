#pragma once
#include <string>
using namespace std;
class Publication
{
protected:
    string publicationName;
    int publicationYear_of_create; //отрицательные числа - до нашей эры
public:
    Publication();
    Publication(string const &publicationName, int const &publicationYear_of_create);
    Publication(Publication const &otherPublication);
    void setPublicationName(string const &publicationName);
    const string& getPublicationName() const;
    void setPublicationYear_of_create(int const &publicationYear_of_create);
    const int getPublicationYear_of_create() const;

    Publication& operator = (Publication const &otherPublication);

    virtual void print() const = 0;
};
