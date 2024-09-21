#include<iostream>
using namespace std;
int main()
{
    int option;
    cout<<"1. Convert Celsius to Fahrenheit \n";
    cout<<"2. Convert Kilometers to Miles \n";
    cout<<"3. Find the area of a Circle \n";
    cin>>option;
    switch (option)
    {
    case 1:
        {

    float c; // temperature in celsius
    cout<<"Enter Temperature in Celsius: \n";
    cin>>c;
    float convert=((9/5)*c)+32;
    cout<<"Temperature in Fahrenheit is : "<<convert<<endl;
    break;

         }
    case 2:
        {
            float kilo;//kilometer is defined as kilo
    cout<<"Enter value in Kilometers: \n";
    cin>>kilo;
    float Miles=(kilo/0.621);
    cout<<" In miles it is :"<<Miles<<" miles"<<endl;
    break;
        }

    case 3:
    {
    float area,radius;
    cout<< "Enter the radius of the Circle: \n";
    cin>>radius;
    area= 2*3.1416*radius;
    cout<< "The area of the circle which has radius of "<<radius<<" meters is : "<<area<<" sqmt";
    break;
    }

    default:
        cout<<" You can only choose between 1 to 3";
    }

}
