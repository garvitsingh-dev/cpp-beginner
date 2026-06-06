#include <iostream>

using namespace std;

int main()
{
    int choice;

    int K = 10000;
    do
    {
        cout << "\nMenu : \n1.CHECK BALANCE \n2.DEPOSIT MONEY \n3.WITHDRAW MONEY \n4.EXIT \nPlease enter your choice : ";

        cin >> choice;
        int A, B;

        switch (choice)
        {
        case 1:
            cout << "Your balance is " << K;
            break;
        case 2:
            cout << "Enter amount to be deposited ";
            cin >> A;
            K = K + A;
            cout<<"\nNew balance is\n"<<K;
            break;
        case 3:
            cout << "Enter amount to withdraw ";
            cin >> B;

            if (B > K)
            {
                cout << "Insufficient balance";
            }
            else
            {
                K = K - B;
                cout << "Withdrawal successful";
                cout << "\nNew balance: " << K;
            }

            break;
        case 4:
            cout << "Thanks for visiting !";
            break;

        default:
            cout << "\nPlease enter a valid input\n";
            continue;
        }

    } while (choice != 4);

    return 0;
}
