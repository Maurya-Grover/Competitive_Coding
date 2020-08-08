#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

bool linearSearch(int arr[], int len, int startIndex, int target)
{
    for (int i = startIndex; i < len; i++)
        if (arr[i] == target)
            return true;
        else if (arr[i] > target)
            return false;
    return false;
}
bool binarySearch(int arr[], int begin, int end, int target)
{
    while (begin <= end)
    {
        int mid = (begin + end) / 2;
        if (arr[mid] == target)
            return true;
        else if (arr[mid] > target)
            end = mid - 1;
        else
            begin = mid + 1;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // arr sorted in ascending order
    int countLinear = 0, countBinary = 0;
    /*
    // linear search method
    for (int i = 0; i < n; i++)
        if (linearSearch(arr, n, i + 1, arr[i] + d) and linearSearch(arr, n, i + 1, arr[i] + 2 * d))
            countLinear++;
    // binary search method
    for (int i = 0; i < n; i++)
        if (binarySearch(arr, i + 1, n, arr[i] + d) and binarySearch(arr, i + 1, n, arr[i] + 2 * d))
            countBinary++;
    //cout << countBinary;
    */
    return 0;
}