#include<iostream>//library

using namespace std;
int main(){
int d;
//Declaring d
cout<<"Enter the number of days you want to convert.";
cin>>d;//Asking user for d

cout<<d;
cout<<" days is ";
cout<<d/365;
cout<<" years,";
int y = d%365;
//Calculating remainder
cout<<y/7; cout<<" weeks ";
int w = y%7;
cout<<"and "<<w; cout<<" days";
}
