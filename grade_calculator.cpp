#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c, d, e, mmax;
    cout << "This is a grade calculator";

    cout << "\nEnter maximum marks in a subject ";
    cin >> mmax;

    cout << "\nEnter your marks in A ";
    cin >> a;
    cout << "\nEnter your marks in B ";
    cin >> b;
    cout << "\nEnter your marks in C ";
    cin >> c;
    cout << "\nEnter your marks in D ";
    cin >> d;
    cout << "\nEnter your marks in E ";
    cin >> e;

    int T = a + b + c + d + e;

    double G = (T / (mmax * 5.0));

    double L = G * 100;
    cout << fixed << setprecision(2);
    if (L >= 90)
    {
        cout << "Congratulations you scored " << L << " percent in  your exams and your grade is A+";
    }
    else if (L >= 80)
    {
        cout << "Congratulations you scored " << L << " percent in  your exams and your grade is B+";
    }
    else if (L >= 70)
    {
        cout << "Congratulations you scored " << L << " percent in  your exams and your grade is C+";
    }
    else if (L >= 60)
    {
        cout << "Congratulations you scored " << L << " percent in  your exams and your grade is D+";
    }
    else if (L >= 50)
    {
        cout << "Congratulations you scored " << L << " percent in  your exams and your grade is E+";
    }
    else if (L >= 40)
    {
        cout << "Congratulations you scored " << L << " percent in  your exams and your grade is F+";
    }
    else
    {
        cout << "Congratulations you scored " << L << " percent in  your exams and you have failed";
    }

    return 0;
}
