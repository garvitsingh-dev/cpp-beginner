#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, i;

    cout << setw(5);
    cout << "This is a multiplication table generator.\nPrint the table of : ";
    cin >> a;
    cout << "\nUpto the number : ";
    cin >> b;

    for (i = 1; i <= b; i++)
    {
        cout << a << " * " << i << " = " << (a * i) << endl;
    }

    return 0;
}
