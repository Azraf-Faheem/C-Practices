#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Input Three Numbers: \n";
    cin>>a >> b >> c;
    string Highest=(a>b && a>c)?a : ((b>a && b>c)?b :c); //using ternaryy operator to write the conditional expression
    cout<<"The Greatest Number of the inserted three numbers is : "<<Highest;
}
