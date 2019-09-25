#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alien, group;
    long int a = 1, b = 1;
    cin >> alien >> group;

    for (int i = 0; i < alien.length(); i++)
    {
        a *= (alien[i] - 'A' + 1);
    }
    for (int i = 0; i < group.length(); i++)
    {
        b *= (group[i] - 'A' + 1);
    }
    if (a % 47 == b % 47)
        cout << "GO" << endl;
    else
        cout << "STAY" << endl;
    return 0;
}