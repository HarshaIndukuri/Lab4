#include<iostream>
#include<cmath>
//Library
using namespace std;
int main(){
float p,n,r;
//Declaring p,n and r

cout<<"What is your principal amount?"<<endl;
cin>>p;

cout<<"What is the rate of interest in %?"<<endl;
cin>>r;

cout<<"Enter the number of years you want to save your money."<<endl;
cin>>n;

float x = pow(1 + r/100, n);
//Calculating x
cout<<"The amount after "; cout<<n; cout<<" years is "<<x*p<<endl;
cout<<"The interest generated is "<<x*p - p<<endl;
//Giving output to user
}
