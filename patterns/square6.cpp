#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int num = 1;

    for (int i = 1; i < n; i++)
    {
        cout << num;
        num++;
        for (int j = 1; j < n; j++)
        {
            cout << num;
            num++;
        }

        cout << endl;
    }
}