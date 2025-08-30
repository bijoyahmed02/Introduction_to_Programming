#include <iostream>

using namespace std;

int main()
{
    int x = 4,y,z;
    y = x++;
    z = ++x;
    int p = 3,s,t;
    s = p--;
    t = --p;
    cout << "x = "<<x<<","<<"y = "<<y<<","<<"z = "<<z<< endl;
    cout << "p = "<<p<<","<<"s = "<<s<<","<<"t = "<<t<< endl;
    return 0;
}
