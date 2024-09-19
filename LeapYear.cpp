#include<iostream>
using namespace std;
int main()
{
    int Year;
    cout<<" Insert a year: ";
    cin>>Year;
    if(Year%400==0)
    {
        cout<<Year<<" is a Leap year.";
    }
    else if(Year%100!=0&&Year%4==0)
    {
        cout<<Year<<" is a Leap Year.";
    }
    else{
        cout<<Year<<" is not a Leap Year.";
    }
}
