#include "rabie.h"
#include "ahmed.h"
#include <iostream>
using namespace std;

rabie::rabie(string n, ahmed ob)
: name(n), dateOfBirthday(ob)
{
  //  name = n;
   // dateOfBirthday= ob;
}

 void rabie::printInfo(){
        cout << name << "was born in ";
        dateOfBirthday.printDate();
 }
