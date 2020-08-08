// simply implement jo bola hai
#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, problems;
    cin >> n >> k;
    int answer = 0, page = 1;
    // number of problems in i th chapter
    // n chapters // k problems per page
    for (int chapter = 1; chapter <= n; chapter++)
    {
        cin >> problems;
        for (int index = 1; index <= problems; index++)
        // index of current Problem we have virtually printed
        // for the current chapter and number problems taken as input
        {
            if (index == page)
                answer++;
            if (index == problems or index % k == 0)
                // turn page if we exhaust all problems
                // or no. of problems on a page reach
                //their limit of k
                page++;
        }
    }
    cout << answer;
    return 0;
}