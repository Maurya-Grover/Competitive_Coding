#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin >> number;
    for (int i = 0; i < number; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (abs(z - x) > abs(z - y))
        {
            cout << "Cat B"<<endl;
        }
        else if (abs(z - y) > abs(z - x))
        {
            cout << "Cat A"<<endl;
        }
        else
        {
            cout << "Mouse C"<<endl;
        }
    }
}