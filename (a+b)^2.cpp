// Write code for computing the formula (a+b)^2

#include <iostream>
#include <cmath>
using namespace std;


double test(double a, double b) {
	cout<<endl<<"("<<a<<"+"<<b<<")^2 = ";
	
    double computeSquares;
    double computeProduct;
  computeSquares= pow(a,2)+pow(b,2);
 cout<<"(("<<a<<")^2 + ("<<b<<")^2 + 2*"<<a<<"*"<<b<<") "<<endl;
  
  computeProduct= 2*a*b;
  cout<<"("<<a<<"+"<<b<<")^2 = ";
  cout<<"("<<pow(a,2)<<" + "<<pow(b,2)<<"+ "<<computeProduct<<") "<<endl;
 
  double answer;
  answer= computeSquares + computeProduct;
   cout<<"("<<a<<"+"<<b<<")^2 = "<<answer;
  //write your code here
 
  return answer;
}
int main(){  
int a, b; 
cout<<"Calculate the formula (a+b)^2"<<endl;
cout<<"Give me number  For a ";
cin>>a;

cout<<endl<<"Give me number  For b ";
cin>>b;
 

cout <<endl<< "Answer is: " << test(a,b) << endl;

}
