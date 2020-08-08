#include <bits/stdc++.h>
#define newline cout << "\n"
#define inputs(x) getline(cin, x)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string input;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    inputs(input);
    string special = "!@#$%^&*()-+";
    int numCount = 0, lowerCharCount = 0, upperCharCount = 0, splCharCount = 0;
    int charToBeAddedCount = (n < 6) ? (6 - n) : 0;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] >= 97 and input[i] <= 122)
            lowerCharCount++;
        if (input[i] >= 65 and input[i] <= 90)
            upperCharCount++;
        if (input[i] >= 48 and input[i] <= 57)
            numCount++;
        for (int j = 0; j < special.size(); j++)
            if (input[i] == special[j])
                splCharCount++;
    }
    int condition[4];
    condition[0] = numCount;
    condition[1] = lowerCharCount;
    condition[2] = upperCharCount;
    condition[3] = splCharCount;
    int confirmCharactersMissing = 0;
    for (int i = 0; i < 4; i++)
        if (condition[i] == 0)
            confirmCharactersMissing++;
    if (confirmCharactersMissing > charToBeAddedCount)
        charToBeAddedCount = confirmCharactersMissing;
    else if (n >= 6)
        charToBeAddedCount += confirmCharactersMissing;
    cout << charToBeAddedCount;
    return 0;
}