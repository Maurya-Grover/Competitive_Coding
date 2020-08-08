#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void heapify(vi &hT, int current)
{
    int size = hT.size();
    int largest = current;   // current node
    int l = 2 * current + 1; // left child of i
    int r = 2 * current + 2; // right child of i
    int parent = (current - 1) / 2;
    // find the largest node of the three - current, left and right
    if (l < size and hT[l] > hT[largest])
        largest = l;
    if (r < size and hT[r] > hT[largest])
        largest = r;
    if (largest != current)
    {
        swap(hT[current], hT[largest]);
        heapify(hT, largest);
    }
}
void buildHeap(vi &hT)
{
    for (int i = (hT.size() / 2) - 1; i >= 0; i--)
        heapify(hT, i);
}
void insert(vi &hT, int newNum)
{
    if (hT.size() == 0)
        hT.pb(newNum);
    else
    {
        hT.pb(newNum);
        buildHeap(hT);
    }
}
void deleteNode(vi &hT, int num)
{
    int i;
    for (i = 0; i < hT.size(); i++)
        if (num == hT[i])
            break;
    swap(hT[i], hT[hT.size() - 1]);
    hT.pop_back();
    buildHeap(hT);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}