#include<iostream>
using namespace std;

int main()
{double f;
    
    cout<<"Enter the temperature in farenheit:\n";cin>>f;
    double celcius = (5.0/9.0)*(f-32);
    cout<<"The current temperature in celcius is:\n"<<celcius;
    return 0;
}
