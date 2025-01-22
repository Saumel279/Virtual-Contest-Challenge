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
    string s;
    cin >> s;
    map<char,int> m;
    for(int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    int maxi = INT_MIN, mini = INT_MAX;
    char mx, mn;
    for(auto u : m)
    {
        if(u.second < mini)
        {
            mini = u.second;
            mn = u.first;
        }
        if(u.second > maxi)
        {
            maxi = u.second;
            mx = u.first;
        }
    }
    if(maxi == mini)
    {
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != s[i+1])
            {
                s[i+1] = s[i];
                break;
            }
        }
        cout << s << endl;
        return;
    }
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == mn)
        {
            s[i] = mx;
            break;
        }
    }
    cout << s << endl;
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