#include <iostream>
using namespace std;

int main()
{
    cout << "For Loop:" << endl;
    for (int i = 0; i <= 10; i = i + 2)
    {
        cout << i << endl;
    }

    cout << "While Loop:" << endl;

    int j = 0;
    while (j < 5)
    {
        cout << j << endl;
        j++;
    }

    cout << "Do-While Loop:" << endl;

    int k = 0;
    do {
        cout << k << endl;
        k++;
    } while (k < 5);

    return 0;
}
