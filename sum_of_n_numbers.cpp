#include <iostream>

using namespace std;

int main()
{
    int N;
    int Sum=0;
    cout << "Enter the number till which you want sum of : ";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        Sum=Sum+i;
    }
    cout << "Your factorial is : " << Sum ;
}