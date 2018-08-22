#include<iostream>
//Library
using namespace std;
int main(){
float p,n,r;
//Declaring p,n and r

cout<<"What is your principal amount?"<<endl;
cin>>p;

cout<<"What is the rate of interest in %?"<<endl;
cin>>r;

cout<<"Enter the number of years you are going to save your money."<<endl;
cin>>n;
//Taking p,n and r from user

float x = p*n*r;
//calculating pnr
cout<<"The interest is "<<x/100<<endl;
cout<<"The total amount after ";cout<<n; cout<<" years is "<<x/100 + p<<endl;
}
