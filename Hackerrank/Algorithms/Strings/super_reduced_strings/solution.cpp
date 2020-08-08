#include <bits/stdc++.h>
#define newline cout << "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input, output;
    getline(cin, input);
    bool completed = false;
    while (not completed)
    {
        int i = 0;
        int n = input.size();
        while (i <= n - 1)
        {
            if (input[i] != input[i + 1])
                output.push_back(input[i]);
            else if (input[i] == input[i + 1])
                i++;
            i++;
        }
        //cout << output; debug print statement
        //newline;
        bool done = true;
        for (int i = 0; i < output.size(); i++)
            if (output[i] == output[i + 1])
            {
                done = false;
                break;
            }
        completed = done;
        if (!done)
        {
            input.clear();
            input = output;
            output.clear();
        }
    }    
    if (!output.size())
        cout << "Empty String";
    else
        cout << output;
    return 0;
}