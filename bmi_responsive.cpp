#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
    double height, weight;

    cout << "This is a BMI calculator.\nEnter your height in meters: ";
    cin >> height;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    double bmi = weight / (height * height);

    cout << fixed << setprecision(2);
    cout << "Your current BMI is " << bmi << endl;

    if (bmi < 18.5)
    {
        cout << "You are underweight";
    }
    else if (bmi <= 24.9)
    {
        cout << "You are in normal category";
    }
    else if (bmi <=29.9)
    {
        cout << "You are overweight";
    }
    else 
    {
        cout << "You are obese";
    }
    
    return 0;
}
