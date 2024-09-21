#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    //   Horizontal : x axix
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << endl;

    // vertical : y axix
    for (int j = 0; j < n; j++)
    {
        cout << "* \n";
    }

    return 0;
}