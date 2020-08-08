#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, front, back, number;
    cin >> n >> p;
    front = p / 2;
    back = (n / 2) - (p / 2);
    number = std::min(front, back);

    cout << number;
}