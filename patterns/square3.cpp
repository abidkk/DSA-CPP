#include <iostream>
using namespace std;

int main (){
    int n = 4;
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
       cout << ch;
       ch++;

       for (int j  = 0; j < n; j++)
       {
       cout << ch;
       ch++;
       }
       cout << endl;
       
        
    
    }

    
    
}