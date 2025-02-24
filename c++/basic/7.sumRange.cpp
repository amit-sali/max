#include <iostream>
using namespace std;

int main()
{
    int start, end, sum = 0;
    cout << "enter the value of START and END of range" << endl;
    cin >> start >> end;

    for (int i = start; i <= end; i++)
    {
        sum = sum + start;
    }

    cout<<"sum of numbers in given range:"<<sum<<endl;
}