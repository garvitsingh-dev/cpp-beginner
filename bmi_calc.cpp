#include<iostream>

using namespace std;
int main()
{double height,weight;
    cout<<"This is a BMI calculator.\n Enter your height\n ";cin>>height;
    double k= height*height;

    cout<<"\nEnter your weight\n";cin>>weight;

    double bmi=(weight/k);
    cout<<"Your current BMI is "<<bmi;
    return 0;
}