#include<iostream>
using namespace std;

int main()
{int p;
    double  r,t;
    cout<<"Enter you principal amount:\n";cin>>p;
    cout<<"Enter the time period(in years):\n";cin>>t;
    cout<<"Enter you interest rate:\n";cin>>r;
    double T=t*12;
    double S=(p*r*T)/(1200);
    
    cout<<"Your interest is:\n"<<S;
    cout<<"\nTotal amount payable over "<<t<<" years is \n"<<S+p;


    
    return 0;
}
