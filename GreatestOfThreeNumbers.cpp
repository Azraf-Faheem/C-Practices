#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout <<"Type Three numbers: \n";
    cin>>a>>b>>c;
    if(a>b&&a>>c){
        cout<<a<<" is the greatest among "<<a<<","<<b<<" and "<<c;
    }
    else if(b>a&&b>c){
        cout<<b<<" is the greatest among "<<a<<","<<b<<" and "<<c;
    }
    else{
        cout<<c<<" is the greatest among "<<a<<","<<b<<" and "<<c;
    }
}
