#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter : " << endl;
        cin >> arr[i];
    }
    cout << "You entered : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    int k;
    do
    {
        /* code */

        cout << "\nEnter number to be searched : \n";
        int num;
        int result = 0;
        cin >> num;
        // searcher

        for (int i = 0; i < 5; i++)
        {
            if (arr[i] == num)
            {
                cout << "\nResult found at : " << i + 1;
                result = result + 1;
            }
        }
        if (result == 0)
        {
            cout << "\nNo result\n";
        }

        cout << "\nTotal " << result << " result found.\n1.To exit type -1 to continue type any number\n:";
        cin >> k;

    } while (k != -1);

    cout << "\n EXIT";

    return 0;
}