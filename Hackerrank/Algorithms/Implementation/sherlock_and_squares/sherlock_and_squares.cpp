// actually dont need to find all the square roots
// just find the number of numbers between square roots of the ranges
// depending on whether they are upper limits or lower limits
#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;
/*
int binarySquareRoot(int x)
{
    if (x == 0 || x == 1)
        return x;
    int start = 0, end = x;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (mid * mid == x)
            return mid;
        // we dont need floor only perfect squares
        if (mid * mid < x)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1; // if not perfect square
}*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q, a, b;
    cin >> q;
    while (q--)
    {
        cin >> a >> b;
        cout << (int)(floor(sqrt(b)) - ceil(sqrt(a)) + 1);
        newline;
        // +1 is done to include either the floor or the ceil
        /*for (int i = a; i <= b; i++)
            if (binarySquareRoot(i) != -1)
                count++;*/
    }
    return 0;
}