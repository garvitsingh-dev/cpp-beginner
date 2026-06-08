#include <iostream>
using namespace std;

int main()
{
    int roll[5];
    int student[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter roll number: ";
        cin >> roll[i];

        cout << "Enter marks : ";
        cin >> student[i];
    }

    int choice;

    do
    {
        cout << "Menu :\n1.Show all students\n2.Show Highest\n3.Show lowest\n4.Search roll number\n5.Exit\n\n\nEnter Choice : ";
        cin >> choice;

        if (choice > 5)
        {
            cout << "Enter valid command!!!\n";
            continue;
        }
        switch (choice)
        {
        case 1:
            cout << "Roll Number:    Marks:\n";
            for (int i = 0; i < 5; i++)
            {
                cout << roll[i] << "                " << student[i] << endl;
            }

            break;

        case 2:
        {
            int high = student[0];

            for (int i = 0; i < 5; i++)
            {
                if (student[i] > high)
                {
                    high = student[i];
                }
            }
            cout << "\nThe highest marks are : " << high << endl;
        }

        break;

        case 3:
        {
            int low = student[0];

            for (int i = 0; i < 5; i++)
            {
                if (student[i] < low)
                {
                    low = student[i];
                }
            }
            cout << "\nThe lowest marks are : " << low << endl;
        }

        break;

        case 4:
        {
            int sroll, result = 0;
            cout << "Enter roll number to be found : ";
            cin >> sroll;
            for (int i = 0; i < 5; i++)
            {
                if (roll[i] == sroll)
                {
                    cout << "\nResult found for roll number : " << roll[i] << " and marks are : " << student[i] << endl;
                    result = result + 1;
                    break;
                }
            }
            if (result == 0)
            {
                cout << "No result found\n";
            }
        }

        break;

        case 5:
            cout << "\n Thanks";

            break;
        }

    } while (choice != 5);

    return 0;
}