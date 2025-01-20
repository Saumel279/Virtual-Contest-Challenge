#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int zero = 0;
    for (auto &u : v)
    {
        cin >> u;
        if (u == 0)
            zero++;
    }
    if (zero == n)
    {
        cout << 0 << endl;
    }
    else if (zero == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        bool blocks = false;
        int count_of_blocks = 0;
        for (auto u : v)
        {
            if (u != 0)
            {
                if (!blocks)
                {
                    count_of_blocks++;
                    blocks = true;
                }
            }
            else
            {
                blocks = false;
            }
        }
        if (count_of_blocks == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}
int main()
{
    optimize();

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}