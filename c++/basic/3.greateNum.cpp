#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "enter the value of num1: ";
    cin >> num1;
    cout << "enter the value of num2: ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << num1 << " is greater" << endl;
    }
    else if (num2 > num1)
    {
        cout << num2 << " is greater" << endl;
    }
    else
    {
        cout << "both are equal" << endl;
    }
}
