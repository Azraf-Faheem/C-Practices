#include<iostream>
using namespace std;
int main()
{
    int m,num; //input number to be store in num to calculate the multiplication table
    int i;
    cout<< "Enter a number to Find out the multiplication table :"<<endl;
    cin>>num;
    cout<<"The Multiplication table of : "<<num<<" is as below \n";
    for(  i=1; i<= 10; i++)
    {
        m=num*i;
        cout<<num<<'*'<<i<<"="<<m<<endl;
    }

}
