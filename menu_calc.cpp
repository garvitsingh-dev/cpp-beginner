#include<iostream>

#include<iomanip>

using namespace std;

int main()
{
    cout<<"This is a menu calculator.\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Divison\nPlease input your choice: ";
    int choice;

    cin>>choice;
    double A,B;
    cout<<fixed<<setprecision(3);


    switch (choice)
    {
    case 1:
        cout<<"You've chosen addition.\nPlease enter A ";cin>>A;
        cout<<"Please enter B ";cin>>B;
        cout<<"Your answer is "<<A+B;
        break;
    case 2:
        cout<<"You've chosen subtraction.\nPlease enter A ";cin>>A;
        cout<<"Please enter B ";cin>>B;
        cout<<"Your answer is "<<A-B;
        break;
    case 3:
        cout<<"You've chosen multiplication.\nPlease enter A ";cin>>A;
        cout<<"Please enter B ";cin>>B;
        cout<<"Your answer is "<<A*B;
        break;
    case 4:
        cout<<"You've chosen division.\nPlease enter A ";cin>>A;
        cout<<"Please enter B ";cin>>B;
        if (B==0)
        {
            cout<<"Undefined";
        }
        else{
        
        cout<<"Your answer is "<<A/B;}

        break;
    
    default:cout<<"Please enter a valid input";
        break;
    }

    
    
    return 0;
}
