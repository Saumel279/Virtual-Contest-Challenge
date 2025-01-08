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
    ll n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;

    ll sum = (a + b + c);
    ll days = (n / sum);

    ll dis = days * sum;
    days *= 3;

    if (dis == n)
    {
        cout << days << endl;
        return;
    }

    if (dis + a >= n)
    {
        cout << days + 1 << endl;
        return;
    }
    else
    {
        dis += a;
        days++;
    }

    if (dis + b >= n)
    {
        cout << days + 1 << endl;
        return;
    }
    else
    {
        dis += b;
        days++;
    }

    if (dis + c >= n)
    {
        cout << days + 1 << endl;
        return;
    }
    else
    {
        dis += c;
        days++;
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