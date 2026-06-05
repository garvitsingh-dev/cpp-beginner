#include<iostream>

#include<iomanip>

using namespace std;

int main()
{
   int a;
   cout <<"This is an even odd checker built using else-if.\nEnter your number: ";
   cin>>a;

   double b = (a%2);

   if ( b == 0)
   {
    cout<<"\nIt is an even number";
   }

   else{
    cout<<"\nIt is an odd number.";
   }
   


   return 0;
}
