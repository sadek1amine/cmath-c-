// formula you need to compute:sqrt(a^2+b^2)

#include <iostream>
#include <cmath>
using namespace std;

float test(float a, float b) {
  
  float computeSqrt;
  cout<<endl<<"sqrt("<<a<<"^2 +"<<b<<"^2 )= ";
  cout<<"sqrt("<<pow(a,2)<<" + "<<pow(b,2)<<") ";
  // write your code here
  cout<<endl<<"sqrt("<<a<<"^2 +"<<b<<"^2 )= ";
  cout<<"sqrt("<<pow(a,2) + pow(b,2)<<") ";
  
  computeSqrt= sqrt(pow(a,2) + pow(b,2));
  
  cout<<endl<<"sqrt("<<a<<"^2 +"<<b<<"^2 )= "<<computeSqrt;
  
  return computeSqrt;
}
int main(){  
int a, b; 
cout<<"Calculate the formula sqrt(a^2+b^2)"<<endl;
cout<<"Give me number  For a ";
cin>>a;

cout<<endl<<"Give me number  For b ";
cin>>b;
 

cout <<endl<< "Answer is: " << test(a,b) << endl;

}


