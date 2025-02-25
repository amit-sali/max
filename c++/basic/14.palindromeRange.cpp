#include <iostream>
using namespace std;
int main()
{
    int start, end;
    cout << "enter the value of START and END" << endl;
    cin >> start >> end;
    for (int i = start; i <= end; i++)
    {
        int copy;
        int reverse = 0;
        copy = i;
        while (copy > 0)
        {
            int lastDigit = copy % 10;
            reverse = reverse * 10 + lastDigit;
            copy = copy / 10;
            if (i == reverse)
            {
                cout << "palindrome :" << i << endl;
            }
        }
    }
}