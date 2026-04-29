#include <bits/stdc++.h>
#define endl '\n'
#define int ll
using namespace std;

using ll = long long;

const ll MOD = 1e9 + 7;
const ll mod = 998244353;

ll ksm(ll base, ll up) {
  ll res = 1;
  while (up) {
    if (up & 1)
      res = res * base % MOD;
    base = base * base % MOD;
    up >>= 1;
  }
  return res;
}

void solve() {
  int n, q;
  cin >> n >> q;
  vector<int> fa(n + 1);
  for (int i = 1; i <= n; i++) {
    fa[i] = i;
  }
  int l, r;
  while (q--) {
    cin >> l >> r;
    fa[l] = r;
  }
  vector<int> ans(n + 1, 0);
  vector<bool> vis(n + 1, false);
  for (int i = 1; i <= n; i++) {
    if(fa[i] != i)
      vis[fa[i]] = true;
  }
  for (int i = 1; i <= n; i++) {
    if (!vis[i]) {
      int now = i;
      int cnt = 1;
      while (fa[now] != now) {
        cnt++;
        now = fa[now];
      }
      ans[now] = cnt;
    }
  }
  for (int i = 1; i <= n; i++) {
    if (i != 1) cout << ' ';
    cout << ans[i];
  }
  cout << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t = 1;
  // cin >> t;
  while (t--)
    solve();
  return 0;
}
