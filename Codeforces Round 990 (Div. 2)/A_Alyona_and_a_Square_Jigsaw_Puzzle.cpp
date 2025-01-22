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
    int n, ans = 0, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;

    vector<int> check;
    for(int i = 1; i <= 99; i += 2)
    {
        check.push_back(i *i);
    }
    for(int i = 0; i < n; i++)
    {
        sum += v[i];
        for(int j = 0; j < check.size(); j++)
        {
            if(sum == check[j])
            {
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
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