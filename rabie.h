#ifndef RABIE_H
#define RABIE_H
#include <string>
#include "ahmed.h"
using namespace std;


class rabie
{
    public:
        rabie(string n, ahmed ob);
        void printInfo();

    private:
        string name;
        ahmed dateOfBirthday;
};

#endif // RABIE_H
