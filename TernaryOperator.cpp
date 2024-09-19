#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Input Three Numbers: \n";
    cin>>a>>b>>c;
    string Highest=(a>b&&a>c)?"The greatest is":"no";
    cout<<Highest;
}
