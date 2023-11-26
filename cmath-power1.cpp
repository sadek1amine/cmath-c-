#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float myFloat ;
    cout<<"Write a number ";
    cin>>myFloat;
    // we use the pow function to compute the powers of the integer values given
    cout << myFloat << " in the power of 2 is " << pow(myFloat, 2) << endl;
    cout << myFloat << " in the power of 3 is " << pow(myFloat, 3) << endl;
    cout << myFloat << " in the power of 0.5 is " << pow(myFloat, 0.5) << endl;
    

    return 0;
}
