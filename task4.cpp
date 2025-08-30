#include <iostream>

using namespace std;

int main()
{
    string firstName = "Abonti";
    string lastName = " Rinki";
    string x = "20";
    string y = "30";
    int p = 30;
    string z = x+y;
    string s = x+ to_string(p);
    string fullName = firstName.append(lastName);
    cout << "Full Name: "<<fullName<< endl;
    cout <<"Z: "<<z<<endl;
    cout <<"S: "<<s;
    return 0;
}
