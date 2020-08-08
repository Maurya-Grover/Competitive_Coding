#include <bits/stdc++.h>
#define newline cout << "\n"
#define max 160
using namespace std;

// this function multiplies x with  the number represented by res[]
// res_size is the number of digits in the number
int multiply(int x, int res[], int res_size)
{
    int carry = 0;
    for (int i = 0; i < res_size; i++)
    {
        //one by one multiply n with individual digits of res[]
        int prod = res[i] * x + carry;
        // store last digit of product in res[i]
        res[i] = prod % 10;
        // store the remainder in carry
        carry = prod / 10;
    }
    // put rest of the carry in res and update res_size
    while (carry)
    {
        res[res_size] = carry % 10;
        carry /= 10;
        res_size++;
    }
    return res_size;
}

void factorial(int n)
{
    int res[max];
    res[0] = 1;
    int res_size = 1;
    // apply simple formula for factorial n! = 1 * 2 * 3 * ..... (n-2) * (n-1) * n
    for (int x = 2; x <= n; x++)
        res_size = multiply(x, res, res_size);
    for (int i = res_size - 1; i >= 0; i--)
        cout << res[i];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    factorial(n);
    return 0;
}