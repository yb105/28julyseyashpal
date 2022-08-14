// Pyramid with * and also inverted pyramid
#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of row: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)  // if want to print inverted pyramid then i = rows, i >= rows and i--
    {
        for(int j = 1; j <= i; ++j) // j = i; j >0;
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

