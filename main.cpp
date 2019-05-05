#include <iostream>
#include "rabie.h"
#include "ahmed.h"
using namespace std;



int main()
{
    ahmed birthobj(25,11,1887);
    rabie rabiepb ("rabie birthday is ", birthobj);
    rabiepb.printInfo();


    return 0;
}
