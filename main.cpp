#include <iostream>
#include <string>
#include "publication.h"
#include "newspaper.h"
#include "book.h"
#include "magazine.h"

using namespace std;

int main()
{
    Magazine a;
    a.print();
    cout << endl;
    Magazine b("name", 2001, 20);
    cout << b << endl;
    a=b;
    cout << a << endl;
    Newspaper c;
    c.print();
    cout << endl;
    Magazine d;
    d.print();
    cout << endl;
    cout << "\n\n\t Input magazinIssue: ";
    int issuebuf;
    cin >> issuebuf;
    while(!(d.setMagazinIssue(issuebuf)))
    {
        cout<< "\n magazinIssue can't be less than 1!";
        cout<< "\n\n\t Input magazinIssue: ";
        cin>> issuebuf;
    }
    d.print();
    cout << endl;
    return 0;
}
