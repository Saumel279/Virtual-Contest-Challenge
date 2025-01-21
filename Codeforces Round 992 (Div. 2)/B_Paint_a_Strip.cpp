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
    int ans = 2;
    ll sum = 4;
    if(n == 1)
    {
        cout << 1 << endl;
        return;
    }
    ll puku = 0;
    while(1)
    {
        if(sum >= n) break;
        sum++;
        ans++;
        sum *= 2;
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