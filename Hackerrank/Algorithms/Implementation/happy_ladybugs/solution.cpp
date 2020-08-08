// either we cant make 1 ladybug happy or if sufficient
// ladybugs are there then there must atleast 1 empty cell
// to sort them or if they are already sorted then
// even we're sorted xD
#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int games, n;
    string input;
    cin >> games;
    while (games--)
    {
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, input); // describing the board
        int count[26] = {0};
        bool completed = true, sortable = false, singleLadyBug = false; // sortable only if there is 1 empty cell
        for (int i = 0; i < n; i++)
        {
            if (input[i] == '_')
                sortable = true;
            else
            {
                count[input[i] - 'A']++;
                if ((i == n - 1 or input[i] != input[i + 1]) and (i == 0 or input[i] != input[i - 1]))
                    completed = false;
            }
        }
        for (int i = 0; i < 26; i++)
            if (count[i] == 1)
                singleLadyBug = true;
        if (!singleLadyBug and (completed or sortable))
            cout << "YES";
        else
            cout << "NO";
        newline;
    }
    return 0;
}