#include <iostream>

using namespace std;

int main()
{

    double age;
    cout << "Let's check your voting eligibility.\nPlease enter your age : ";
    cin >> age;

    if (age < 18)
    {
        cout << "\nYou're ineligible to vote.\nCome back in " << 18 - age << " years or " << (18 - age) * 12 << " months";
    }

    else
    {
        cout << "\nYou're eligible to vote.";
    }

    return 0;
}
