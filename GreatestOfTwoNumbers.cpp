#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Type any two numbers: \n";
    cin>>a>>b;
    if(a==b){
        cout<<a <<" and "<<b<<" are Equal";
    }
    else if (a>b){
        cout<<a<<" is the Greatest.";
    }
    else{
        cout<<b<<" is the Greatest";
    }
}
