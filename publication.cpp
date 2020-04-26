#include "publication.h"

Publication::Publication()
{
    this->setPublicationName("");
    this->setPublicationYear_of_create(2000);
}
Publication::Publication(string const &publicationName, int const &publicationYear_of_create)
{
    this->setPublicationName(publicationName);
    this->setPublicationYear_of_create(publicationYear_of_create);
}
Publication::Publication(Publication const &otherPublication)
{
    this->setPublicationName(otherPublication.publicationName);
    this->setPublicationYear_of_create(otherPublication.publicationYear_of_create);
}

void Publication::setPublicationName(string const &publicationName)
{
    this->publicationName = publicationName;
}
const string& Publication::getPublicationName() const
{
    return publicationName;
}

void Publication::setPublicationYear_of_create(int const &publicationYear_of_create)
{
    this->publicationYear_of_create = publicationYear_of_create;
}
const int Publication::getPublicationYear_of_create() const
{
    return publicationYear_of_create;
}

Publication& Publication::operator = (Publication const &otherPublication)
{
    this->setPublicationName(otherPublication.publicationName);
    this->setPublicationYear_of_create(otherPublication.publicationYear_of_create);
    return *this;
}
