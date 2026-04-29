#include <bits/stdc++.h>
#define endl '\n'
// #define int ll
using namespace std;

using ll = long long;

// const ll MOD = 1e9 + 7;

ll ksm(ll base, ll up)
{
    ll res = 1;
    while (up)
    {
        if (up & 1)
            res = res * base;
        base = base * base;
        up >>= 1;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    int front = 1;
    int back = 3 * n;
    for (int i = 0; i < n; i++)
    {
        cout << back << ' ' << back - 1 << ' ' << front << ' ';
        back -= 2;
        front++;
    }
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}