#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float myFloat = 7.4f; //the f (requires decimal) tells the compiler to treat this real number as a 32 bit float
    //and not as a 64 bit double. this is more of a force of habit than a requirement
    cout << "The square root of " << myFloat << " is " << sqrt(myFloat) << endl;


    return 0;
}
