#include <iostream>

using namespace std;

int main(){
    int a,i;
    long long factorial =1 ;
    cout<<"Enter the number you want factorial of : ";cin>>a;
    for ( int i = 1; i <= a; i++)
    {
        factorial= factorial*i;
    }
    cout<<"Your factorial is : "<<factorial;

}

