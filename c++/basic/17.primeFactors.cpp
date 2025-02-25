#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "enter the number :" << endl;
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            int copy = i;
            int flag = 0;
            for (int i = 2; i <= copy; i++)
            {
                if (copy % 10 == 0)
                {
                    flag++;
                }

                if (flag > 1)
                {
                    return 0;
                }
                else
                {
                    cout << "the prime factors: " << i << endl;
                }
            }
        }
    }
}