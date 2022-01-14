#include <iostream>
#include <vector>
#include <map>
using namespace std;
using ll = long long;

int main()
{
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  vector<ll> s(n + 1);
  for (int i = 0; i < n; ++i)
  {
    s[i + 1] = s[i] + a[i];
  }
  map<ll, ll> mp;
  ll ans = 0;
  for (int r = 1; r < n + 1; ++r)
  {
    ++mp[s[r - 1]];
    ans += mp[s[r] - k];
  }
  cout << ans << endl;
  return 0;
}
