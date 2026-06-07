#include <iostream>
using namespace std;

int main()
{
    int fail = 0, pass = 0;

    int marks[5];
    int mmax[5];

    for (int i = 0; i <= 4; i++)
    {
        cout << "Please enter marks in subject " << i + 1 << " : ";
        cin >> marks[i];

        /*cout << "Please enter max marks in subject " << i + 1 << " : ";
        cin >> mmax[i];*/
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << "Marks entered :\n " << marks[i] << endl;
    }

    /* for (int i = 0; i < 5; i++)
     {
         float passM = (marks[i] / mmax[i]) * 100;
         if (passM > 40)
         {
             cout << "You have passed in subject : " << i + 1 << endl;
         }
         else
         {
             cout << "\nYou've failed in subject " << i + 1 << endl;
             fail = fail + 1;
         }
     }*/
    int choice;
    do
    {
        string menu[5] = {"1.Show Highest", "2.Show Lowest", "3.Show average", "4.Show passcount", "5.Exit"};
        cout << "MENU";
        for (int i = 0; i < 5; i++)
        {
            cout << "\n"
                 << menu[i] << endl;
        }
        int highest, lowest;

        cin >> choice;

        if (choice == 5)
        {
            cout << "Thanks";
        }

        else
        {
            switch (choice)
            {

            case 1:
                highest = marks[0];
                for (int i = 0; i < 5; i++)
                {
                    if (highest < marks[i])
                    {
                        highest = marks[i];
                    }
                }
                cout << "Highest marks are : " << highest << endl;
                break;

            case 2:
                lowest = marks[0];
                for (int i = 0; i < 5; i++)
                {

                    if (lowest > marks[i])
                    {
                        lowest = marks[i];
                    }
                }
                cout << "Lowest marks are : " << lowest << endl;
                break;

            case 3:
                float Tmarks = 0;
                for (int i = 0; i < 5; i++)
                {
                    Tmarks = Tmarks + marks[i];
                }

                cout << "Average marks are : " << Tmarks / 5.00 << endl;
                break;

            case 4:

                pass = 0;
                fail = 0;

                for (int i = 0; i < 5; i++)
                {
                    if (marks[i] >= 40)
                    {
                        pass++;
                    }
                    else
                    {
                        fail++;
                    }
                }

                cout << "Passed: " << pass << endl;
                cout << "Failed: " << fail << endl;

                break;

            default:
                cout << "Please enter valid choice.";
                break;
            }
        }
    } while (choice != 5);
    return 0;
}