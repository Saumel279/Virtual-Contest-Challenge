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
    vector<int> a(n);
    vector<int> b(n);
    for(auto &u : a) cin >> u;
    for(auto &u : b) cin >> u;
    int suma = 0, sumb = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] >= b[i + 1])
        {
            suma += a[i];
            sumb += b[i + 1];
        }
    }
    suma += a[n - 1];
    cout << suma - sumb << endl; 
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
