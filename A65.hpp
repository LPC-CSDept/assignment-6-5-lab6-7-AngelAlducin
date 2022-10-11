//

#include <iomanip>
#include <iostream>
using namespace std;

void swap(int &, int &, int &);
void swaptwo(int &, int &);

// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().

// swaptwo() ; to swap two values (a, b) to (b, a)

void swap(int &A1, int &A2, int &A3 )
{
    int Val;
    swaptwo(A1, A2);
    Val = A3;
    A3 = A1;
    A1 = Val;
}

void swaptwo(int &A1, int &A2)
{
    int Val2;
    Val2 = A1;
    A1 = A2;
    A2 = Val2;
}