#include <iostream>
using namespace std;

class student
{
private:
    int roll;
    string name;
    int marks;

public:
    void input();
    void display();
    int getMarks();
    int getRoll();
    string getName();
};
student stu[5];

void student ::input()
{
    cout << "Please enter roll number : ";
    cin >> roll;
    cout << "Please enter name : ";
    cin >> name;
    cout << "Please enter marks : ";
    cin >> marks;
}

void student ::display()
{
    cout << "The name of student is :" << name << " whose roll number is : " << roll << " and marks are : " << marks << endl;
}
int student::getMarks()
{
    return marks;
}
int student::getRoll()
{
    return roll;
}
string student::getName()
{
    return name;
}
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

void showHigh()
{
    int highM = stu[0].getMarks();
    int highRoll = stu[0].getRoll();
    string highName = stu[0].getName();

    for (int i = 1; i < 5; i++)
    {
        if (stu[i].getMarks() > highM)
        {
            highM = stu[i].getMarks();
            highRoll = stu[i].getRoll();
            highName = stu[i].getName();
        }
    }
    cout << "\nThe highest marks are : " << highM << " for roll number " << highRoll << " name " << highName << endl;
}

void searchAll(int a)
{
    int found = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a == stu[i].getRoll())
        {
            cout << "Match found for roll number : " << stu[i].getRoll() << " named: " << stu[i].getName() << " and has marks : " << stu[i].getMarks() << endl;
            found++;
            continue;
        }
    }
    if (found == 0)
    {
        cout << "\nNo results found.\n";
    }
}

void showLow()
{
    int lowM = stu[0].getMarks();
    int lowRoll = stu[0].getRoll();
    string lowName = stu[0].getName();

    for (int i = 1; i < 5; i++)
    {
        if (stu[i].getMarks() < lowM)
        {
            lowM = stu[i].getMarks();
            lowRoll = stu[i].getRoll();
            lowName = stu[i].getName();
        }
    }
    cout << "\nThe lowest marks are : " << lowM << " for roll number " << lowRoll << " name " << lowName << endl;
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        stu[i].input();
    }

    int choice;
    do
    {
        showMenu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            for (int i = 0; i < 5; i++)
            {
                stu[i].display();
            }

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