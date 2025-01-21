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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;
    int puku = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        int c = 0;
        for(int j = 0; j < n; j++)
        {
            if(i == j) continue;
            if(abs(v[i] - v[j]) % k != 0) c++;
        }
        if(c > ans)
        {
            ans = c;
            puku = i;
        }
    }
    if(ans == n - 1){ yes; cout << puku + 1 << endl; } 
    else no;
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