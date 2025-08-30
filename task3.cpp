#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int y = 6;
    int z = 7;
    double p = 5;
    x+=3;
    p/=2;
    z%=2;
    cout << "x+=3: "<<x<< endl;
    cout << "p/=2: "<<p<< endl;
    cout << "z%=2: "<<z<< endl;
    cout <<(y>x)<< endl;
    cout <<(y>=x)<< endl;
    cout <<(x!=y)<< endl;
    cout <<(x>=y)<< endl;
    cout <<(z>3 && p<8)<<endl;
    cout <<(z>8 || p<6)<<endl;
    cout <<(!(z>6 && p<8));
    return 0;
}
