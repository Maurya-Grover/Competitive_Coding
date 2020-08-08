// a modified kaprekar number(mkn) is a whole number with
// a special property. if a mkn is squared and then split
// into two integers and the sum of those integers gives the
// original mkn
#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int p, q; // 0-100000
    bool kaprekarFound = false;
    cin >> p;
    cin >> q;
    // we get the range between which numbers to find
    // if the number has d digits the square either has 2d
    // digits or 2d-1 digits. the right side must have more
    // digits. left half and right half must be either (d and d)
    // or (d-1 and d) respectively because the sum has to be
    // equal to the original number. to get each part simply
    // square of each number / 10^d gives left half and  
    // square of each number % 10^d gives right half
    for (long long int i = p; i <= q; i++)
    {
        long long int square = i * i;
        long long int digits = 0, curNum = i;
        while (curNum)
        {
            digits++;
            curNum /= 10;
        }
        long long int tenToThePowerOfDigits = 1;
        while (digits--)
        {
            tenToThePowerOfDigits *= 10;
        }
        if ((square / tenToThePowerOfDigits + square % tenToThePowerOfDigits) == i)
        {
            kaprekarFound = true;
            cout << i << " ";
        }
    }
    if (not kaprekarFound)
        cout << "INVALID RANGE";
    return 0;
}