#include <iostream>
using namespace std;

struct student
{
    int roll;
    int marks;
    string name;
};

student stu[5];

void showMenu()
{
    cout << "\nMenu :\n";
    cout << "1.Show all students\n";
    cout << "2.Show Highest\n";
    cout << "3.Show Lowest\n";
    cout << "4.Search roll number\n";
    cout << "5.Exit\n";
    cout << "\nEnter Choice : ";
}
void searchAll(int a)
{
    for (int i = 0; i < 5; i++)
    {
        if (a == stu[i].roll)
        {
            cout << "Match found for roll number : " << stu[i].roll << " named: " << stu[i].name << " and has marks : " << stu[i].marks;
            break;
        }
        else
        {
            cout << "\nNo results found.\n";
        }
    }
}

void showHigh()
{
    int highM = stu[0].marks;
    int highRoll = stu[0].roll;
    string highName = stu[0].name;

    for (int i = 1; i < 5; i++)
    {
        if (stu[i].marks > highM)
        {
            highM = stu[i].marks;
            highRoll = stu[i].roll;
            highName = stu[i].name;
        }
    }
    cout << "\nThe highest marks are : " << highM << " for roll number " << highRoll << " name " << highName << endl;
}
void showLow()
{
    int lowM = stu[0].marks;
    int lowRoll = stu[0].roll;
    string lowName = stu[0].name;

    for (int i = 1; i < 5; i++)
    {
        if (stu[i].marks < lowM)
        {
            lowM = stu[i].marks;
            lowRoll = stu[i].roll;
            lowName = stu[i].name;
        }
    }
    cout << "\nThe lowest marks are : " << lowM << " for roll number " << lowRoll << " name " << lowName << endl;
}

void showAll()
{
    cout << "Roll Number:    Marks:    Name:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << stu[i].roll << "                " << stu[i].marks << "                " << stu[i].name << endl;
    }
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "\nPlease enter the roll number : ";
        cin >> stu[i].roll;
        cout << "\nPlease enter student's name : ";
        cin >> stu[i].name;
        cout << "\nPlease enter his/her marks : ";
        cin >> stu[i].marks;
    }

    int choice;

    do
    {
        showMenu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            showAll();
            break;
        case 2:
            showHigh();
            break;
        case 3:
            showLow();
            break;
        case 4:
            int a;
            cout << "Enter roll number to be searched : ";
            cin >> a;
            searchAll(a);

            break;
        case 5:
            cout << "Thanks for visiting!!!";
            break;

        default:
            cout << "Please enter a valid choice!!!!";
            continue;
        }

    } while (choice != 5);

    return 0;
}